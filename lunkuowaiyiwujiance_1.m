%用于识别枣轮廓外异物的检测


% clear
% clc

function a1=lunkuowaiyiwujiance_1(P)

X=P;


% X = imread('hege1.jpg');
% X=rgb2gray(X); %图像是三维的应转为二维，即变为灰度图
% figure,imshow(X),title('灰白图');
% figure,imhist(X,256);%,title('原始图像灰度直方图')；

% figure,imshow(X),title('原始图层');
% E=edge(X,0.08);
% E=uint8(255*(1-double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel边缘提取');

% X1=X(:,:,1);
% % figure,imshow(X1),title('红色图层');
% E1=edge(X1,0.08);
% E1=uint8(255*(1-double(E1)));
% figure,imshow(uint8(E1),'truesize');title('sobel边缘提取');
% 
% % E_canny_best1=edge(X1,'canny',[0.093 0.095],2);
% % figure,imshow(E_canny_best1);title('canny边缘提取');
% 
% % th=[0.1 0.2];
% % E_canny_best1=edge(X1,th);
% % E_canny_best1=uint8(255*(1-double(E_canny_best1)));
% % figure,imshow(uint8(E_canny_best1),'truesize');title('canny边缘提取');

% X2=X(:,:,2);
% % figure,imshow(X2),title('绿色图层');
% E2=edge(X2,0.08);
% E2=uint8(255*(1-double(E2)));
% figure,imshow(uint8(E2),'truesize');title('sobel边缘提取');
% 
% % E_canny_best2=edge(X2,'canny',[0.093 0.095],2);
% % figure,imshow(E_canny_best2);title('canny边缘提取');
% 
% % th=[0.1 0.2];
% % E_canny_best2=edge(X2,th);
% % E_canny_best2=uint8(255*(1-double(E_canny_best2)));
% % figure,imshow(uint8(E_canny_best2),'truesize');title('canny边缘提取');

X3=X(:,:,3);
% figure,imshow(X3),title('蓝色图层');
% E3=edge(X3,0.08);
% E3=uint8(255*(1-double(E3)));
% figure,imshow(uint8(E3),'truesize');title('sobel边缘提取');

% E_canny_best3=edge(X3,'canny',[0.1 0.2],2);%0.093 0.095
% figure,imshow(E_canny_best3);title('canny边缘提取');

X3=imadjust(X3,[0/255 145/255],[]);%把原始图像映射到0~110灰度中
% figure,imshow(X3);title('映射图');

X3 = medfilt2(X3,[30,30]);
% figure,imshow(X3);title('中值滤波');


th=[0.99 1.0];%0.1 0.2/0.9 1.0       
E_canny_best3=edge(X3,th);
E_canny_best3=uint8(255*(double(E_canny_best3)));
% figure,imshow(uint8(E_canny_best3));title('canny边缘提取');

% X = medfilt2(E_canny_best3,[15,15]);
% figure,imshow(X);title('中值滤波');

se1=strel('disk',60);%50  60
X=imdilate(E_canny_best3,se1);
% figure,imshow(X);title('图像膨胀');

X=imclearborder(X,4);
% figure,imshow(X);title('移除与边界连通');

X = bwmorph(X,'thin',inf);
% figure,imshow(X);title('图像形态处理减细');

% % dim=size(X);
% % col=round(dim(2)/2)-90;
% % row=find(X(:,col),1);
% % C=bwtraceboundary(X,[col,row],'N',8);
% % figure,imshow(X);
% % hold on;
% % plot(C(:,:),'g','LineWidth',2);%曲线跟踪

% [B,L]=bwboundaries(X,8,'noholes');
% figure,imshow(label2rgb(L,@jet,[.5 .5 .5]));
% hold on;
% for k=1:length(B)
%     boundary=B{k};
%     plot(boundary(:,2),boundary(:,1),'b','LineWidth',1)%%区域跟踪
% end
% C=cell2mat(C);
% C=str2double(C);
% figure,imshow(C);

X=imfill(X,'holes');
% figure,imshow(X);

E=edge(X,0.08);
E=uint8(255*(double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel边缘提取');

se1=strel('disk',3);%50  60
X=imdilate(E,se1);
% figure,imshow(X);title('图像膨胀');

X = bwmorph(X,'thin',inf);
% figure,imshow(X);title('图像形态处理减细');

[height,width]=size(X); 
% p=0;
for i=1:height
    for j=1:width
        p=0;
        if X(i,j)==0
            continue;
        end
        if X(i-1,j-1)==1
            p=p+1;
        end
        if X(i,j-1)==1
            p=p+1;
        end
        if X(i+1,j-1)==1
            p=p+1;
        end
        if X(i-1,j)==1
            p=p+1;
        end
        if X(i+1,j)==1
            p=p+1;
        end
        if X(i-1,j+1)==1
            p=p+1;
        end
        if X(i,j+1)==1
            p=p+1;
        end
        if X(i+1,j+1)==1
            p=p+1;
        end
        if p>2
%             disp(['该枣有异物','(',num2str(i),',',num2str(j),')']);
            a1=1;
            break;
        else
            p=0;
            continue;
        end
    end
    if p>2
        break;
    end
end
if p<3
%     disp('该枣无异物');
    a1=0;
end



% X = medfilt2(X,[3,3]);
% figure,imshow(X);title('中值滤波');


 
% se2=strel('disk',15);
% X=imerode(X,se2);
% figure,imshow(X);title('图像腐蚀');

% %填充内部孤立象素(例如被1包围的0)
% X = bwmorph(X,'fill',inf);
% figure,imshow(X);title('hh');
% 
%n为Inf时，将物体（目标）缩减为一个象素。该操作将内部不含孔的物体（目标）缩减为一个象素，
%而将内部含孔的物体（目标）缩减为一个环，该环位于每一个孔
%和外边界的中间。该操作将保留图象的欧拉数（Euler number.）。
% X = bwmorph(X,'shrink',inf);
% figure,imshow(X);title('hh');%填充内部孤立象素(例如被1包围的0)



% figure,imhist(X,256);%,title('绿色图像灰度直方图');
% X=imadjust(X,[123/255 124/255],[]);%把原始图像映射到28~100灰度中
% figure,imshow(X),title('映射图');
% figure,imhist(X,256),title('映射图灰度直方图');


% E=edge(X,0.08);
% E=uint8(255*(1-double(E)));
% figure(3),imshow(uint8(E),'truesize');title('sobel边缘提取');

% E_canny_best=edge(X,'canny',[0.093 0.095],2);
% figure,imshow(E_canny_best);title('canny边缘提取');

% th=[0.1 0.2];
% E_canny_best=edge(X,th);
% E_canny_best=uint8(255*(1-double(E_canny_best)));
% figure,imshow(uint8(E_canny_best),'truesize');title('canny边缘提取');

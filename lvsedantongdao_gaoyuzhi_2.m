%绿色通道高阈值法鉴别被枣包裹的枣梗和白色明显异物：
%枣梗的白色没有渐变，是白块；
%光斑则是由黑变灰变白，整体大但是白色小；
%白色明显异物同理白色部分较大；
%则通过调整阈值取白色，可区别光斑和异物。

%不合格1，不合格4均属于白色异物明显及枣梗，通过此法可鉴别出，
%不合格2异物同样渐变颜色，需重新调整阈值进行二次检测

% clear
% clc
function b1=lvsedantongdao_gaoyuzhi_2(P)

X=P;

% X = imread('hege1.jpg');
X=X(:,:,2);
% figure,imshow(X),title('绿色图层');
% figure,imhist(X,256);%,title('绿色图像灰度直方图');
X=imadjust(X,[128/255 129/255],[]);%把原始图像映射到28~100灰度中
% figure,imshow(X),title('映射图');
% figure,imhist(X,256),title('映射图灰度直方图');

level=graythresh(X) ;%使用最大类间方差法找到图片的一个合适的阈值
% level=0.9
X = im2bw(X, level);% 变为二值图像
X=1-X;%matlab默认处理白色为1
% figure,imshow(X),title('二值映射图');

X = medfilt2(X,[23,23]);
% figure,imshow(X);title('中值滤波');


se1=strel('disk',14);
X=imdilate(X,se1);
% figure,imshow(X);title('图像膨胀');

 
se2=strel('disk',15);
X=imerode(X,se2);
% figure,imshow(X);title('图像腐蚀');

%判断黑色被白色包围

% X = bwmorph(X,'thicken',inf);
% figure,imshow(X);title('图像形态处理加粗');

% %填充内部孤立象素(例如被1包围的0)
% X = bwmorph(X,'fill',inf);
% figure,imshow(X);title('hh');
% 
%n为Inf时，将物体（目标）缩减为一个象素。该操作将内部不含孔的物体（目标）缩减为一个象素，
%而将内部含孔的物体（目标）缩减为一个环，该环位于每一个孔
%和外边界的中间。该操作将保留图象的欧拉数（Euler number.）。
X = bwmorph(X,'shrink',inf);
% figure,imshow(X);title('简化后图像');%填充内部孤立象素(例如被1包围的0)
% 
[height,width]=size(X); 

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
        if p>1
%             disp(['该枣有异物','(',num2str(i),',',num2str(j),')']);
            b1=1;
            break;
        else
            p=0;
            continue;
        end
    end
    if p>1
        break;
    end
end
if p<2
%     disp('该枣无异物');
    b1=0;
end



%����ʶ��������������ļ��


% clear
% clc

function a1=lunkuowaiyiwujiance_1(P)

X=P;


% X = imread('hege1.jpg');
% X=rgb2gray(X); %ͼ������ά��ӦתΪ��ά������Ϊ�Ҷ�ͼ
% figure,imshow(X),title('�Ұ�ͼ');
% figure,imhist(X,256);%,title('ԭʼͼ��Ҷ�ֱ��ͼ')��

% figure,imshow(X),title('ԭʼͼ��');
% E=edge(X,0.08);
% E=uint8(255*(1-double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel��Ե��ȡ');

% X1=X(:,:,1);
% % figure,imshow(X1),title('��ɫͼ��');
% E1=edge(X1,0.08);
% E1=uint8(255*(1-double(E1)));
% figure,imshow(uint8(E1),'truesize');title('sobel��Ե��ȡ');
% 
% % E_canny_best1=edge(X1,'canny',[0.093 0.095],2);
% % figure,imshow(E_canny_best1);title('canny��Ե��ȡ');
% 
% % th=[0.1 0.2];
% % E_canny_best1=edge(X1,th);
% % E_canny_best1=uint8(255*(1-double(E_canny_best1)));
% % figure,imshow(uint8(E_canny_best1),'truesize');title('canny��Ե��ȡ');

% X2=X(:,:,2);
% % figure,imshow(X2),title('��ɫͼ��');
% E2=edge(X2,0.08);
% E2=uint8(255*(1-double(E2)));
% figure,imshow(uint8(E2),'truesize');title('sobel��Ե��ȡ');
% 
% % E_canny_best2=edge(X2,'canny',[0.093 0.095],2);
% % figure,imshow(E_canny_best2);title('canny��Ե��ȡ');
% 
% % th=[0.1 0.2];
% % E_canny_best2=edge(X2,th);
% % E_canny_best2=uint8(255*(1-double(E_canny_best2)));
% % figure,imshow(uint8(E_canny_best2),'truesize');title('canny��Ե��ȡ');

X3=X(:,:,3);
% figure,imshow(X3),title('��ɫͼ��');
% E3=edge(X3,0.08);
% E3=uint8(255*(1-double(E3)));
% figure,imshow(uint8(E3),'truesize');title('sobel��Ե��ȡ');

% E_canny_best3=edge(X3,'canny',[0.1 0.2],2);%0.093 0.095
% figure,imshow(E_canny_best3);title('canny��Ե��ȡ');

X3=imadjust(X3,[0/255 145/255],[]);%��ԭʼͼ��ӳ�䵽0~110�Ҷ���
% figure,imshow(X3);title('ӳ��ͼ');

X3 = medfilt2(X3,[30,30]);
% figure,imshow(X3);title('��ֵ�˲�');


th=[0.99 1.0];%0.1 0.2/0.9 1.0       
E_canny_best3=edge(X3,th);
E_canny_best3=uint8(255*(double(E_canny_best3)));
% figure,imshow(uint8(E_canny_best3));title('canny��Ե��ȡ');

% X = medfilt2(E_canny_best3,[15,15]);
% figure,imshow(X);title('��ֵ�˲�');

se1=strel('disk',60);%50  60
X=imdilate(E_canny_best3,se1);
% figure,imshow(X);title('ͼ������');

X=imclearborder(X,4);
% figure,imshow(X);title('�Ƴ���߽���ͨ');

X = bwmorph(X,'thin',inf);
% figure,imshow(X);title('ͼ����̬�����ϸ');

% % dim=size(X);
% % col=round(dim(2)/2)-90;
% % row=find(X(:,col),1);
% % C=bwtraceboundary(X,[col,row],'N',8);
% % figure,imshow(X);
% % hold on;
% % plot(C(:,:),'g','LineWidth',2);%���߸���

% [B,L]=bwboundaries(X,8,'noholes');
% figure,imshow(label2rgb(L,@jet,[.5 .5 .5]));
% hold on;
% for k=1:length(B)
%     boundary=B{k};
%     plot(boundary(:,2),boundary(:,1),'b','LineWidth',1)%%�������
% end
% C=cell2mat(C);
% C=str2double(C);
% figure,imshow(C);

X=imfill(X,'holes');
% figure,imshow(X);

E=edge(X,0.08);
E=uint8(255*(double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel��Ե��ȡ');

se1=strel('disk',3);%50  60
X=imdilate(E,se1);
% figure,imshow(X);title('ͼ������');

X = bwmorph(X,'thin',inf);
% figure,imshow(X);title('ͼ����̬�����ϸ');

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
%             disp(['����������','(',num2str(i),',',num2str(j),')']);
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
%     disp('����������');
    a1=0;
end



% X = medfilt2(X,[3,3]);
% figure,imshow(X);title('��ֵ�˲�');


 
% se2=strel('disk',15);
% X=imerode(X,se2);
% figure,imshow(X);title('ͼ��ʴ');

% %����ڲ���������(���类1��Χ��0)
% X = bwmorph(X,'fill',inf);
% figure,imshow(X);title('hh');
% 
%nΪInfʱ�������壨Ŀ�꣩����Ϊһ�����ء��ò������ڲ������׵����壨Ŀ�꣩����Ϊһ�����أ�
%�����ڲ����׵����壨Ŀ�꣩����Ϊһ�������û�λ��ÿһ����
%����߽���м䡣�ò���������ͼ���ŷ������Euler number.����
% X = bwmorph(X,'shrink',inf);
% figure,imshow(X);title('hh');%����ڲ���������(���类1��Χ��0)



% figure,imhist(X,256);%,title('��ɫͼ��Ҷ�ֱ��ͼ');
% X=imadjust(X,[123/255 124/255],[]);%��ԭʼͼ��ӳ�䵽28~100�Ҷ���
% figure,imshow(X),title('ӳ��ͼ');
% figure,imhist(X,256),title('ӳ��ͼ�Ҷ�ֱ��ͼ');


% E=edge(X,0.08);
% E=uint8(255*(1-double(E)));
% figure(3),imshow(uint8(E),'truesize');title('sobel��Ե��ȡ');

% E_canny_best=edge(X,'canny',[0.093 0.095],2);
% figure,imshow(E_canny_best);title('canny��Ե��ȡ');

% th=[0.1 0.2];
% E_canny_best=edge(X,th);
% E_canny_best=uint8(255*(1-double(E_canny_best)));
% figure,imshow(uint8(E_canny_best),'truesize');title('canny��Ե��ȡ');

%��ɫͨ������ֵ�������ɫ���������
%

%���ϸ�1�����ϸ�4�ѱ���ɫ��ͨ������ֵ�������
%���ϸ�2����ͬ��������ɫ�������µ�����ֵ���ж��μ��

% clear
% clc
function c1=lvsedantongdao_diyuzhi_3(P)
X=P;

% X = imread('buhege4.jpg');
X=X(:,:,2);
% figure,imshow(X),title('��ɫͼ��');
% figure,imhist(X,256);%,title('��ɫͼ��Ҷ�ֱ��ͼ');
X=imadjust(X,[84/255 85/255],[]);%��ԭʼͼ��ӳ�䵽28~100�Ҷ���
% figure,imshow(X),title('ӳ��ͼ');
% figure,imhist(X,256),title('ӳ��ͼ�Ҷ�ֱ��ͼ');
level=graythresh(X) ;%ʹ�������䷽��ҵ�ͼƬ��һ�����ʵ���ֵ
% level=0.9
X = im2bw(X, level);% ��Ϊ��ֵͼ��
X=1-X;%matlabĬ�ϴ����ɫΪ1
% figure,imshow(X),title('��ֵӳ��ͼ');

X = medfilt2(X,[23,23]);
% figure,imshow(X);title('��ֵ�˲�');

% % % % X = bwmorph(X,'thicken',20);
% % % % figure,imshow(X);title('ͼ����̬����Ӵ�');
% % % % 
% % % % X = bwmorph(X,'thin',20);
% % % % figure,imshow(X);title('ͼ����̬�����ϸ');

se2=strel('disk',5);
X=imerode(X,se2);
% figure,imshow(X);title('ͼ��ʴ');


se1=strel('disk',30);
X=imdilate(X,se1);
% figure,imshow(X);title('ͼ������');

 
se2=strel('disk',25);
X=imerode(X,se2);
% figure,imshow(X);title('ͼ��ʴ');
 
% E=edge(X,0.08);
% E=uint8(255*(double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel��Ե��ȡ');


a=bwarea(X);
% disp(['���=',num2str(a)]);
b=bwperim(X);
b=sum(sum(b));
% disp(['�ܳ�=',num2str(b)]);
c=b^2/a;
% disp(['Բ�ζ�--���ܶ�=',num2str(c)]);

if c>14.5
%   disp(['���������','Բ�ζ�--���ܶ�=',num2str(c)]);
    c1=1;
else
%      disp('����������');
    c1=0;
end
 
  

% a=regionprops(X,'area');
% b=regionprops(X,'perimeter');
% disp(['���=',num2str(a)]);
% disp(['�ܳ�=',num2str(b)]);


% E_canny_best=edge(X,'canny',[0.093 0.095],2);
% figure,imshow(E_canny_best);title('canny��Ե��ȡ');

% th=[0.1 0.2];
% E_canny_best=edge(X,th);
% E_canny_best=uint8(255*(1-double(E_canny_best)));
% figure,imshow(uint8(E_canny_best),'truesize');title('canny��Ե��ȡ');
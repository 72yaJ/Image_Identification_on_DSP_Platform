%绿色通道低阈值法鉴别白色不明显异物：
%

%不合格1，不合格4已被绿色单通道高阈值法检出，
%不合格2异物同样渐变颜色，需重新调低阈值进行二次检测

% clear
% clc
function c1=lvsedantongdao_diyuzhi_3(P)
X=P;

% X = imread('buhege4.jpg');
X=X(:,:,2);
% figure,imshow(X),title('绿色图层');
% figure,imhist(X,256);%,title('绿色图像灰度直方图');
X=imadjust(X,[84/255 85/255],[]);%把原始图像映射到28~100灰度中
% figure,imshow(X),title('映射图');
% figure,imhist(X,256),title('映射图灰度直方图');
level=graythresh(X) ;%使用最大类间方差法找到图片的一个合适的阈值
% level=0.9
X = im2bw(X, level);% 变为二值图像
X=1-X;%matlab默认处理白色为1
% figure,imshow(X),title('二值映射图');

X = medfilt2(X,[23,23]);
% figure,imshow(X);title('中值滤波');

% % % % X = bwmorph(X,'thicken',20);
% % % % figure,imshow(X);title('图像形态处理加粗');
% % % % 
% % % % X = bwmorph(X,'thin',20);
% % % % figure,imshow(X);title('图像形态处理减细');

se2=strel('disk',5);
X=imerode(X,se2);
% figure,imshow(X);title('图像腐蚀');


se1=strel('disk',30);
X=imdilate(X,se1);
% figure,imshow(X);title('图像膨胀');

 
se2=strel('disk',25);
X=imerode(X,se2);
% figure,imshow(X);title('图像腐蚀');
 
% E=edge(X,0.08);
% E=uint8(255*(double(E)));
% figure,imshow(uint8(E),'truesize');title('sobel边缘提取');


a=bwarea(X);
% disp(['面积=',num2str(a)]);
b=bwperim(X);
b=sum(sum(b));
% disp(['周长=',num2str(b)]);
c=b^2/a;
% disp(['圆形度--致密度=',num2str(c)]);

if c>14.5
%   disp(['该枣有异物，','圆形度--致密度=',num2str(c)]);
    c1=1;
else
%      disp('该枣无异物');
    c1=0;
end
 
  

% a=regionprops(X,'area');
% b=regionprops(X,'perimeter');
% disp(['面积=',num2str(a)]);
% disp(['周长=',num2str(b)]);


% E_canny_best=edge(X,'canny',[0.093 0.095],2);
% figure,imshow(E_canny_best);title('canny边缘提取');

% th=[0.1 0.2];
% E_canny_best=edge(X,th);
% E_canny_best=uint8(255*(1-double(E_canny_best)));
% figure,imshow(uint8(E_canny_best),'truesize');title('canny边缘提取');
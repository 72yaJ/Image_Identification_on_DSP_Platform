%��ɫͨ������ֵ��������������湣�Ͱ�ɫ�������
%�湣�İ�ɫû�н��䣬�ǰ׿飻
%��������ɺڱ�ұ�ף�������ǰ�ɫС��
%��ɫ��������ͬ���ɫ���ֽϴ�
%��ͨ��������ֵȡ��ɫ���������ߺ����

%���ϸ�1�����ϸ�4�����ڰ�ɫ�������Լ��湣��ͨ���˷��ɼ������
%���ϸ�2����ͬ��������ɫ�������µ�����ֵ���ж��μ��

% clear
% clc
function b1=lvsedantongdao_gaoyuzhi_2(P)

X=P;

% X = imread('hege1.jpg');
X=X(:,:,2);
% figure,imshow(X),title('��ɫͼ��');
% figure,imhist(X,256);%,title('��ɫͼ��Ҷ�ֱ��ͼ');
X=imadjust(X,[128/255 129/255],[]);%��ԭʼͼ��ӳ�䵽28~100�Ҷ���
% figure,imshow(X),title('ӳ��ͼ');
% figure,imhist(X,256),title('ӳ��ͼ�Ҷ�ֱ��ͼ');

level=graythresh(X) ;%ʹ�������䷽��ҵ�ͼƬ��һ�����ʵ���ֵ
% level=0.9
X = im2bw(X, level);% ��Ϊ��ֵͼ��
X=1-X;%matlabĬ�ϴ����ɫΪ1
% figure,imshow(X),title('��ֵӳ��ͼ');

X = medfilt2(X,[23,23]);
% figure,imshow(X);title('��ֵ�˲�');


se1=strel('disk',14);
X=imdilate(X,se1);
% figure,imshow(X);title('ͼ������');

 
se2=strel('disk',15);
X=imerode(X,se2);
% figure,imshow(X);title('ͼ��ʴ');

%�жϺ�ɫ����ɫ��Χ

% X = bwmorph(X,'thicken',inf);
% figure,imshow(X);title('ͼ����̬����Ӵ�');

% %����ڲ���������(���类1��Χ��0)
% X = bwmorph(X,'fill',inf);
% figure,imshow(X);title('hh');
% 
%nΪInfʱ�������壨Ŀ�꣩����Ϊһ�����ء��ò������ڲ������׵����壨Ŀ�꣩����Ϊһ�����أ�
%�����ڲ����׵����壨Ŀ�꣩����Ϊһ�������û�λ��ÿһ����
%����߽���м䡣�ò���������ͼ���ŷ������Euler number.����
X = bwmorph(X,'shrink',inf);
% figure,imshow(X);title('�򻯺�ͼ��');%����ڲ���������(���类1��Χ��0)
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
%             disp(['����������','(',num2str(i),',',num2str(j),')']);
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
%     disp('����������');
    b1=0;
end



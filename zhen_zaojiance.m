%ԭ����������

% str='hege5.jpg';
function zhen_zaojiance

clear
clc

P=imread('hege4.jpg');
% filename=[a,'.txt'];


a=lunkuowaiyiwujiance_1(P);
if a==1
    disp('����������1')%('MATLAB:imread:readURL', 'Can''t read URL "%s".', filename);
else
    b=lvsedantongdao_gaoyuzhi_2(P);
    if b==1
         disp('����������2');
    else
        c=lvsedantongdao_diyuzhi_3(P);
        if c==1
                disp('����������3');
        else
                disp('����������');
        end
    end  
end



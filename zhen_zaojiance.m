%原料枣异物检测

% str='hege5.jpg';
function zhen_zaojiance

clear
clc

P=imread('hege4.jpg');
% filename=[a,'.txt'];


a=lunkuowaiyiwujiance_1(P);
if a==1
    disp('该枣有异物1')%('MATLAB:imread:readURL', 'Can''t read URL "%s".', filename);
else
    b=lvsedantongdao_gaoyuzhi_2(P);
    if b==1
         disp('该枣有异物2');
    else
        c=lvsedantongdao_diyuzhi_3(P);
        if c==1
                disp('该枣有异物3');
        else
                disp('该枣无异物');
        end
    end  
end



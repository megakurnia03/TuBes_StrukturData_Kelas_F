function varargout = Responsi(varargin)
% RESPONSI MATLAB code for Responsi.fig
%      RESPONSI, by itself, creates a new RESPONSI or raises the existing
%      singleton*.
%
%      H = RESPONSI returns the handle to a new RESPONSI or the handle to
%      the existing singleton*.
%
%      RESPONSI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in RESPONSI.M with the given input arguments.
%
%      RESPONSI('Property','Value',...) creates a new RESPONSI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Responsi_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Responsi_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Responsi

% Last Modified by GUIDE v2.5 03-Jan-2019 10:32:40

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Responsi_OpeningFcn, ...
                   'gui_OutputFcn',  @Responsi_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Responsi is made visible.
function Responsi_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Responsi (see VARARGIN)

% Choose default command line output for Responsi
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Responsi wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Responsi_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
[nama_file1, nama_path1]=uigetfile( ...
{'*.bmp;*.jpg;*.jpeg,','File Citra (*.bmp,*.jpg,*.jpeg)';
'*.bmp','File Bitmap(*.bmp)';...
'*.jpg','File jpeg(*.jpg)';...
'*.jpeg','File jpeg(*.jpeg)'},...
'Buka File Citra');
if isequal ([nama_file1, nama_path1],[0,0])
     return;
 else
     image=imread(fullfile(nama_path1, nama_file1));
     handles.image=image;
     guidata(hObject,handles);
     axes(handles.axes1);
     imshow(image);
     guidata(hObject,handles);
     axes(handles.axes2);
     r=image(:,:,1);
     g=image(:,:,2);
     b=image(:,:,3);
     A=imhist(r);
     B=imhist(g);
     C=imhist(b);
     x=1:256;
     axes(handles.axes2);
     bar(x,A,'r');
     hold on;
     bar(x,B,'g');
     bar(x,C,'b');
     set(handles.txtnama,'String',nama_file1);
     [b,k,l]=size(handles.image);
     set(handles.bar,'String',b);
     set(handles.kol,'String',k);
     set(handles.tt,'String',l);
     handles.image=image;
     guidata(hObject,handles);
 end
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)

% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
button=questdlg(['Tutup Aplikasi','?'],...
    ['DIalog Keluar' '' '...'],...
    'Ya','Tidak','Ya');
if strcmp(button,'Tidak');
    return
end
close;
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function edtnmcitra_Callback(hObject, eventdata, handles)
% hObject    handle to edtnmcitra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edtnmcitra as text
%        str2double(get(hObject,'String')) returns contents of edtnmcitra as a double


% --- Executes during object creation, after setting all properties.
function edtnmcitra_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edtnmcitra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edtbaris_Callback(hObject, eventdata, handles)
% hObject    handle to edtbaris (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edtbaris as text
%        str2double(get(hObject,'String')) returns contents of edtbaris as a double


% --- Executes during object creation, after setting all properties.
function edtbaris_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edtbaris (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edtkolom_Callback(hObject, eventdata, handles)
% hObject    handle to edtkolom (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edtkolom as text
%        str2double(get(hObject,'String')) returns contents of edtkolom as a double


% --- Executes during object creation, after setting all properties.
function edtkolom_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edtkolom (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edt_tt_Callback(hObject, eventdata, handles)
% hObject    handle to edt_tt (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edt_tt as text
%        str2double(get(hObject,'String')) returns contents of edt_tt as a double


% --- Executes during object creation, after setting all properties.
function edt_tt_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edt_tt (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

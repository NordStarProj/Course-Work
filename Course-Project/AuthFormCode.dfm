object PasswordModal: TPasswordModal
  Left = 0
  Top = 0
  Caption = 'Auth Form'
  ClientHeight = 138
  ClientWidth = 241
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 0
    Width = 103
    Height = 31
    Caption = 'Password'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 181
    Top = 0
    Width = 52
    Height = 16
    Caption = '(248531)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Dev: TLabel
    Left = 93
    Top = 117
    Width = 140
    Height = 13
    Align = alCustom
    Alignment = taCenter
    Caption = 'Made by NordStar - 2022'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    Font.Quality = fqProof
    ParentFont = False
    Transparent = True
  end
  object PwdEdit: TEdit
    Left = 8
    Top = 37
    Width = 225
    Height = 39
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    PasswordChar = '*'
    ShowHint = False
    TabOrder = 0
    TextHint = '6 digit code'
  end
  object SubmitButton: TButton
    Left = 8
    Top = 82
    Width = 105
    Height = 29
    Caption = 'Submit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = SubmitButtonClick
  end
  object ReturnButton: TButton
    Left = 128
    Top = 82
    Width = 105
    Height = 29
    Caption = 'Return'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = ReturnButtonClick
  end
end

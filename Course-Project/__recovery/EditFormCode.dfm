object EditMode: TEditMode
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1086#1085#1085#1072#1103' '#1089#1080#1089#1090#1077#1084#1072' [EditMode]'
  ClientHeight = 615
  ClientWidth = 1114
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Dev: TLabel
    Left = 966
    Top = 551
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
  object ViewDBNavigator: TDBNavigator
    Left = 8
    Top = 519
    Width = 1040
    Height = 25
    TabOrder = 0
  end
  object ViewDBGrid: TDBGrid
    Left = 8
    Top = 0
    Width = 1098
    Height = 513
    DataSource = ViewMode.ViewDataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 596
    Width = 1114
    Height = 19
    Panels = <
      item
        Width = 100
      end
      item
        Width = 100
      end
      item
        Width = 50
      end>
    ExplicitTop = 576
  end
  object ViewToolbarTimer: TTimer
    Left = 1024
    Top = 208
  end
end
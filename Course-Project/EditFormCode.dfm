object EditMode: TEditMode
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1086#1085#1085#1072#1103' '#1089#1080#1089#1090#1077#1084#1072' [EditMode]'
  ClientHeight = 595
  ClientWidth = 1114
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = EditModeMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Dev: TLabel
    Left = 966
    Top = 551
    Width = 140
    Height = 19
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
    DataSource = ViewDataSource
    TabOrder = 0
  end
  object ViewDBGrid: TDBGrid
    Left = 8
    Top = 0
    Width = 1098
    Height = 513
    DataSource = ViewDataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 576
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
    ExplicitTop = 697
    ExplicitWidth = 1104
  end
  object ViewADOQuery: TADOQuery
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=H:\'#1050#1091#1088#1089#1072#1095'\'#1064#1087#1086#1088#1072'\CW_' +
      'DB_2003.mdb;Persist Security Info=False'
    Parameters = <>
    Left = 1024
    Top = 112
  end
  object ViewADOTable: TADOTable
    Active = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=H:\'#1050#1091#1088#1089#1072#1095'\'#1064#1087#1086#1088#1072'\CW_' +
      'DB_2003.mdb;Persist Security Info=False'
    CursorType = ctStatic
    TableName = 'Main_data'
    Left = 1024
    Top = 16
    object ViewADOTableAutoIncField: TAutoIncField
      DisplayWidth = 5
      FieldName = #8470
      ReadOnly = True
    end
    object ViewADOTableTeam: TWideStringField
      DisplayWidth = 15
      FieldName = 'Team'
      Size = 255
    end
    object ViewADOTableTrainer: TWideStringField
      DisplayWidth = 15
      FieldName = 'Trainer'
      Size = 255
    end
    object ViewADOTableCreatedAt: TDateTimeField
      DisplayWidth = 10
      FieldName = 'CreatedAt'
    end
    object ViewADOTableTournament: TWideStringField
      DisplayWidth = 20
      FieldName = 'Tournament'
      Size = 255
    end
    object ViewADOTableLocation: TWideStringField
      DisplayWidth = 20
      FieldName = 'Location'
      Size = 255
    end
  end
  object ViewDataSource: TDataSource
    DataSet = ViewADOTable
    Left = 1024
    Top = 64
  end
  object EditModeMenu: TMainMenu
    Left = 1024
    Top = 160
    object File1: TMenuItem
      Caption = 'File'
      object ExitOption: TMenuItem
        Caption = 'Exit'
        OnClick = ExitOptionClick
      end
    end
    object Mode1: TMenuItem
      Caption = 'Mode'
      object EditModeOptionDSB: TMenuItem
        Caption = 'Edit mode'
        Checked = True
        Enabled = False
      end
      object ViewModeOptionENB: TMenuItem
        Caption = 'View mode'
        OnClick = ViewModeOptionENBClick
      end
    end
  end
  object ViewToolbarTimer: TTimer
    Left = 1024
    Top = 208
  end
end

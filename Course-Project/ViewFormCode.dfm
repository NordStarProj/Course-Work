object ViewMode: TViewMode
  Left = 0
  Top = 0
  Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1086#1085#1085#1072#1103' '#1089#1080#1089#1090#1077#1084#1072' [ViewMode]'
  ClientHeight = 631
  ClientWidth = 1111
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = ViewModeMenu
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Dev: TLabel
    Left = 963
    Top = 593
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
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 418
    Width = 1080
    Height = 25
    DataSource = ViewDataSource
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    TabOrder = 0
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 612
    Width = 1111
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
    ExplicitTop = 629
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 449
    Width = 217
    Height = 157
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1101#1083#1077#1084#1077#1085#1090#1099' '#1076#1083#1103' '#1086#1090#1086#1073#1088#1072#1078#1077#1085#1080#1103
    TabOrder = 2
    object ViewCheckListBox: TCheckListBox
      Left = 3
      Top = 17
      Width = 211
      Height = 97
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 0
    end
    object ButtonUPD: TButton
      Left = 2
      Top = 120
      Width = 213
      Height = 35
      Align = alBottom
      Caption = #1055#1077#1088#1077#1089#1090#1088#1086#1080#1090#1100
      TabOrder = 1
      OnClick = ButtonUPDClick
    end
  end
  object ViewDBGrid: TDBGrid
    Left = 8
    Top = 8
    Width = 1095
    Height = 404
    DataSource = ViewDataSource
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ReadOnly = True
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ViewDataSource: TDataSource
    DataSet = ViewADOTable
    Left = 1056
    Top = 64
  end
  object ViewADOTable: TADOTable
    Active = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=H:\'#1050#1091#1088#1089#1072#1095'\'#1064#1087#1086#1088#1072'\CW_' +
      'DB_2003.mdb;Persist Security Info=False'
    CursorType = ctStatic
    TableName = 'Main_data'
    Left = 1056
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
  object ViewADOQuery: TADOQuery
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=H:\'#1050#1091#1088#1089#1072#1095'\'#1064#1087#1086#1088#1072'\CW_' +
      'DB_2003.mdb;Persist Security Info=False'
    Parameters = <>
    Left = 1056
    Top = 112
  end
  object ViewModeMenu: TMainMenu
    Left = 1056
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
      object EditModeOption: TMenuItem
        Caption = 'Edit mode'
        OnClick = EditModeOptionClick
      end
      object ViewModeOption: TMenuItem
        Caption = 'View mode'
        Checked = True
        Enabled = False
        OnClick = ViewModeOptionClick
      end
    end
  end
  object ViewToolbarTimer: TTimer
    Left = 1056
    Top = 208
  end
end

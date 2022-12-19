object ControlForm: TControlForm
  Left = 0
  Top = 0
  Caption = 'ControlForm'
  ClientHeight = 23
  ClientWidth = 199
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  WindowState = wsMinimized
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Dev: TLabel
    Left = 27
    Top = 8
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
end

// this is essentially a copy of ../win32/IOViewRegisters.h using translatable
// strings and more consts
struct IOData {
  u16 *address;
  u16 offset;
  const wxChar *name;
  u16 write;
  const wxChar *bits[16];
};

/* const */ IOData ioregs[] = { // not const so tranlation can be done once
  {
    &DISPCNT, 0, wxTRANSLATE("0x4000000-DISPCNT"), 0xFFF7,
    {
      wxT(""),
      wxT(""),
      wxTRANSLATE("BG Mode (3 bits)"),
      wxTRANSLATE("CGB Mode"),
      wxTRANSLATE("Display Frame"),
      wxTRANSLATE("H-Blank Interval OBJ processing"),
      wxTRANSLATE("OBJ Character mapping"),
      wxTRANSLATE("Forced blank"),
      wxTRANSLATE("BG0"),
      wxTRANSLATE("BG1"),
      wxTRANSLATE("BG2"),
      wxTRANSLATE("BG3"),
      wxTRANSLATE("OBJ"),
      wxTRANSLATE("WIN0"),
      wxTRANSLATE("WIN1"),
      wxTRANSLATE("OBJWIN")
    }
  },
  {
    &DISPSTAT, 4, wxTRANSLATE("0x4000004-DISPSTAT"), 0xFF38,
    {
      wxTRANSLATE("V-Blank Status"),
      wxTRANSLATE("H-Blank Status"),
      wxTRANSLATE("VCOUNT Evaluation"),
      wxTRANSLATE("V-Blank Interrupt Enable"),
      wxTRANSLATE("H-Blank Interrupt Enable"),
      wxTRANSLATE("VCOUNT Match Interrupt Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("VCOUNT setting (8 bits)")
    }
  },
  {
    &VCOUNT, 6, wxTRANSLATE("0x4000006-VCOUNT"), 0x0000,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("VCOUNT (8 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG0CNT, 8, wxTRANSLATE("0x4000008-BG0CNT"), 0xDFCF,
    {
      wxT(""),
      wxTRANSLATE("Priority (2 bits)"),
      wxT(""),
      wxTRANSLATE("Char base (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Mosaic"),
      wxTRANSLATE("16/256 colors"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Screen Base Block (5 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Size (2 bits)")
    }
  },
  {
    &BG1CNT, 0xA, wxTRANSLATE("0x400000A-BG1CNT"), 0xDFCF,
    {
      wxT(""),
      wxTRANSLATE("Priority (2 bits)"),
      wxT(""),
      wxTRANSLATE("Char base (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Mosaic"),
      wxTRANSLATE("16/256 colors"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Screen Base Block (5 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Size (2 bits)")
    }
  },
  {
    &BG2CNT, 0xC, wxTRANSLATE("0x400000C-BG2CNT"), 0xFFCF,
    {
      wxT(""),
      wxTRANSLATE("Priority (2 bits)"),
      wxT(""),
      wxTRANSLATE("Char base (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Mosaic"),
      wxTRANSLATE("16/256 colors"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Screen Base Block (5 bits)"),
      wxTRANSLATE("Area Overflow"),
      wxT(""),
      wxTRANSLATE("Size (2 bits)")
    }
  },
  {
    &BG3CNT, 0xE, wxTRANSLATE("0x400000E-BG3CNT"), 0xFFCF,
    {
      wxT(""),
      wxTRANSLATE("Priority (2 bits)"),
      wxT(""),
      wxTRANSLATE("Char base (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Mosaic"),
      wxTRANSLATE("16/256 colors"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Screen Base Block (5 bits)"),
      wxTRANSLATE("Area Overflow"),
      wxT(""),
      wxTRANSLATE("Size (2 bits)")
    }
  },
  {
    &BG0HOFS, 0x10, wxTRANSLATE("0x4000010-BG0HOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Horizontal Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG0VOFS, 0x12, wxTRANSLATE("0x4000012-BG0VOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Vertical Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG1HOFS, 0x14, wxTRANSLATE("0x4000014-BG1HOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Horizontal Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG1VOFS, 0x16, wxTRANSLATE("0x4000016-BG1VOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Vertical Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG2HOFS, 0x18, wxTRANSLATE("0x4000018-BG2HOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Horizontal Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG2VOFS, 0x1A, wxTRANSLATE("0x400001A-BG2VOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Vertical Offset (9 bits, W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG3HOFS, 0x1C, wxTRANSLATE("0x400001C-BG3HOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Horizontal Offset (9 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG3VOFS, 0x1E, wxTRANSLATE("0x400001E-BG3VOFS"), 0x01FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Vertical Offset (9 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT("")
    }
  },
  {
    &BG2PA, 0x20, wxTRANSLATE("0x4000020-BG2PA"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dx (16 bits,W)")
    }
  },
  {
    &BG2PB, 0x22, wxTRANSLATE("0x4000022-BG2PB"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dmx (16 bits,W)")
    }
  },
  {
    &BG2PC, 0x24, wxTRANSLATE("0x4000024-BG2PC"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dy (16 bits,W)")
    }
  },
  {
    &BG2PD, 0x26, wxTRANSLATE("0x4000026-BG2PD"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dmy (16 bits,W)")
    }
  },
  {
    &BG2X_L, 0x28, wxTRANSLATE("0x4000028-BG2X_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("X low bits (16 bits,W)")
    }
  },
  {
    &BG2X_H, 0x2A, wxTRANSLATE("0x400002A-BG2X_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("X high bits (12 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &BG2Y_L, 0x2C, wxTRANSLATE("0x400002C-BG2Y_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Y low bits (16 bits,W)")
    }
  },
  {
    &BG2Y_H, 0x2E, wxTRANSLATE("0x400002E-BG2Y_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Y hight bits (12 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &BG3PA, 0x30, wxTRANSLATE("0x4000030-BG3PA"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dx (16 bits,W)")
    }
  },
  {
    &BG3PB, 0x32, wxTRANSLATE("0x4000032-BG3PB"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dmx (16 bits,W)")
    }
  },
  {
    &BG3PC, 0x34, wxTRANSLATE("0x4000034-BG3PC"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dy (16 bits,W)")
    }
  },
  {
    &BG3PD, 0x36, wxTRANSLATE("0x4000036-BG3PD"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("dmy (16 bits,W)")
    }
  },
  {
    &BG3X_L, 0x38, wxTRANSLATE("0x4000038-BG3X_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("X low bits (16 bits,W)")
    }
  },
  {
    &BG3X_H, 0x3A, wxTRANSLATE("0x400003A-BG3X_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("X hight bits (12 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &BG3Y_L, 0x3C, wxTRANSLATE("0x400003C-BG3Y_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Y low bits (16 bits,W)")
    }
  },
  {
    &BG3Y_H, 0x3E, wxTRANSLATE("0x400003E-BG3Y_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Y hight bits (12 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &WIN0H, 0x40, wxTRANSLATE("0x4000040-WIN0H"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 0 lower-right X (8 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 0 upper-left X (8 bits,W)"),
    }
  },
  {
    &WIN1H, 0x42, wxTRANSLATE("0x4000042-WIN1H"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 1 lower-right X (8 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 1 upper-left (8 bits,W)"),
    }
  },
  {
    &WIN0V, 0x44, wxTRANSLATE("0x4000044-WIN0V"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 0 lower-right Y (8 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 0 upper-left Y (8 bits,W)"),
    }
  },
  {
    &WIN1V, 0x46, wxTRANSLATE("0x4000046-WIN1V"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 1 lower-right Y (8 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Win 1 upper-left Y (8 bits,W)"),
    }
  },
  {
    &WININ, 0x48, wxTRANSLATE("0x4000048-WININ"), 0x3F3F,
    {
      wxTRANSLATE("WIN0 BG0"),
      wxTRANSLATE("WIN0 BG1"),
      wxTRANSLATE("WIN0 BG2"),
      wxTRANSLATE("WIN0 BG3"),
      wxTRANSLATE("WIN0 OBJ"),
      wxTRANSLATE("WIN0 Special FX"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("WIN1 BG0"),
      wxTRANSLATE("WIN1 BG1"),
      wxTRANSLATE("WIN1 BG2"),
      wxTRANSLATE("WIN1 BG3"),
      wxTRANSLATE("WIN1 OBJ"),
      wxTRANSLATE("WIN1 Special FX"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &WINOUT, 0x4A, wxTRANSLATE("0x400004A-WINOUT"), 0x3F3F,
    {
      wxTRANSLATE("WIN0/1 BG0"),
      wxTRANSLATE("WIN0/1 BG1"),
      wxTRANSLATE("WIN0/1 BG2"),
      wxTRANSLATE("WIN0/1 BG3"),
      wxTRANSLATE("WIN0/1 OBJ"),
      wxTRANSLATE("WIN0/1 Special FX"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("OBJWIN BG0"),
      wxTRANSLATE("OBJWIN BG1"),
      wxTRANSLATE("OBJWIN BG2"),
      wxTRANSLATE("OBJWIN BG3"),
      wxTRANSLATE("OBJWIN OBJ"),
      wxTRANSLATE("OBJWIN Special FX"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &MOSAIC, 0x4C, wxTRANSLATE("0x400004C-MOSAIC"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("BG H Size (4 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("BG V Size (4 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("OBJ H Size (4 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("OBJ V Size (4 bits,W)"),
    }
  },
  {
    &BLDMOD, 0x50, wxTRANSLATE("0x4000050-BLDMOD"), 0x3FFF,
    {
      wxTRANSLATE("1st BG0"),
      wxTRANSLATE("1st BG1"),
      wxTRANSLATE("1st BG2"),
      wxTRANSLATE("1st BG3"),
      wxTRANSLATE("1st OBJ"),
      wxTRANSLATE("1st BD"),
      wxT(""),
      wxTRANSLATE("FX Type (2 bits)"),
      wxTRANSLATE("2nd BG0"),
      wxTRANSLATE("2nd BG1"),
      wxTRANSLATE("2nd BG2"),
      wxTRANSLATE("2nd BG3"),
      wxTRANSLATE("2nd OBJ"),
      wxTRANSLATE("2nd BD"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &COLEV, 0x52, wxTRANSLATE("0x4000052-COLEV"), 0x1F1F,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Coefficient EVA (5 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Coefficient EVB (5 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &COLY, 0x54, wxTRANSLATE("0x4000054-COLEY"), 0x001F,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Coefficient EVY (5 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x60, wxTRANSLATE("0x4000060-SG10_L"), 0x007F,
    {
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sweep Shifts (3 bits)"),
      wxTRANSLATE("Sweep addition/decrease"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sweep Time (3 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x62, wxTRANSLATE("0x4000062-SG10_H"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Length (6 bits,W)"),
      wxT(""),
      wxTRANSLATE("Waveform Type (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Steps (3 bits)"),
      wxTRANSLATE("Envelope Attenuate/Amplify"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Initial Value"),
    }
  },
  {
    NULL, 0x64, wxTRANSLATE("0x4000064-SG11"), 0xC7FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Frequency (11 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Continuous/Counter"),
      wxTRANSLATE("Initialization (W)"),
    }
  },
  {
    NULL, 0x68, wxTRANSLATE("0x4000068-SG20"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Length (6 bits,W)"),
      wxT(""),
      wxTRANSLATE("Waveform Type (2 bits)"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Steps (3 bits)"),
      wxTRANSLATE("Envelope Attenuate/Amplify"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Initial Value"),
    }
  },
  {
    NULL, 0x6C, wxTRANSLATE("0x400006C-SG21"), 0xC7FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Frequency (11 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Continuous/Counter"),
      wxTRANSLATE("Initialization (W)"),
    }
  },
  {
    NULL, 0x70, wxTRANSLATE("0x4000070-SG30_L"), 0x00E0,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Waveform 32/64 Steps"),
      wxTRANSLATE("Waveform Bank 0/1"),
      wxTRANSLATE("Sound Output"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x72, wxTRANSLATE("0x4000072-SG30_H"), 0xE0FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Length (8 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Output Level (2 bits)"),
      wxTRANSLATE("Forced 3/4 Output Level"),
    }
  },
  {
    NULL, 0x74, wxTRANSLATE("0x4000074-SG31"), 0xC7FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Frequency (11 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Continuous/Counter"),
      wxTRANSLATE("Initialization (W)"),
    }
  },
  {
    NULL, 0x78, wxTRANSLATE("0x4000078-SG40"), 0xFF3F,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Length (6 bits,W)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Steps (3 bits)"),
      wxTRANSLATE("Envelope Attenuate/Amplify"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Envelope Initial Value"),
    }
  },
  {
    NULL, 0x7C, wxTRANSLATE("0x400007C-SG41"), 0xC0FF,
    {
      wxT(""),
      wxT(""),
      wxTRANSLATE("Dividing Ratio Freq. (3 bits)"),
      wxTRANSLATE("Counter 15/7 Steps"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Counter Shift Clock (4 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sound Continuous/Counter"),
      wxTRANSLATE("Initialization (W)"),
    }
  },
  {
    NULL, 0x80, wxTRANSLATE("0x4000080-SGCNT0_L"), 0xFF77,
    {
      wxT(""),
      wxT(""),
      wxTRANSLATE("Right Volume (3 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Left Volume (3 bits)"),
      wxT(""),
      wxTRANSLATE("Channel 1->Right"),
      wxTRANSLATE("Channel 2->Right"),
      wxTRANSLATE("Channel 3->Right"),
      wxTRANSLATE("Channel 4->Right"),
      wxTRANSLATE("Channel 1->Left"),
      wxTRANSLATE("Channel 2->Left"),
      wxTRANSLATE("Channel 3->Left"),
      wxTRANSLATE("Channel 4->Left"),
    }
  },
  {
    NULL, 0x82, wxTRANSLATE("0x4000082-SGCNT0_H"), 0xFF0F,
    {
      wxT(""),
      wxTRANSLATE("Sound 1-4 Volume (2 bits)"),
      wxTRANSLATE("DMA Sound A Volume"),
      wxTRANSLATE("DMA Sound B Volume"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("DMA Sound A->Right"),
      wxTRANSLATE("DMA Sound A->Left"),
      wxTRANSLATE("DMA Sound A Timer"),
      wxTRANSLATE("DMA Sound A Reset FIFO"),
      wxTRANSLATE("DMA Sound B->Right"),
      wxTRANSLATE("DMA Sound B->Left"),
      wxTRANSLATE("DMA Sound B Timer"),
      wxTRANSLATE("DMA Sound B Reset FIFO"),
    }
  },
  {
    NULL, 0x84, wxTRANSLATE("0x4000084-SGCNT1"), 0x0080,
    {
      wxTRANSLATE("Sound 1 On"),
      wxTRANSLATE("Sound 2 On"),
      wxTRANSLATE("Sound 3 On"),
      wxTRANSLATE("Sound 4 On"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Master Sound Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x88, wxTRANSLATE("0x4000088-SGBIAS"), 0xC3FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Bias Level (10 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Sampling Rate (2 bits)"),
    }
  },
  {
    NULL, 0xA0, wxTRANSLATE("0x40000A0-SIGFIFOA_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 0 (8 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 1 (8 bits)"),
    }
  },
  {
    NULL, 0xA2, wxTRANSLATE("0x40000A2-SIGFIFOA_H"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 2 (8 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 3 (8 bits)"),
    }
  },
  {
    NULL, 0xA4, wxTRANSLATE("0x40000A4-SIGFIFOB_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 0 (8 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 1 (8 bits)"),
    }
  },
  {
    NULL, 0xA6, wxTRANSLATE("0x40000A6-SIGFIFOB_H"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 2 (8 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Data 3 (8 bits)"),
    }
  },
  {
    &DM0SAD_L, 0xB0, wxTRANSLATE("0x40000B0-DM0SAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (lower 16 bits)"),
    }
  },
  {
    &DM0SAD_H, 0xB2, wxTRANSLATE("0x40000B2-DM0SAD_H"), 0x07FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (upper 11 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM0DAD_L, 0xB4, wxTRANSLATE("0x40000B4-DM0DAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (lower 16 bits)"),
    }
  },
  {
    &DM0DAD_H, 0xB6, wxTRANSLATE("0x40000B6-DM0DAD_H"), 0x07FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (upper 11 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM0CNT_L, 0xB8, wxTRANSLATE("0x40000B8-DM0CNT_L"), 0x3FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Count (14 bits)"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM0CNT_H, 0xBA, wxTRANSLATE("0x40000BA-DM0CNT_H"), 0xF7E0,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address Control (2 bits)"),
      wxT(""),
      wxTRANSLATE("Source Address Control (2 bits)"),
      wxTRANSLATE("Repeat"),
      wxTRANSLATE("Transfer Type"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Start Timing (2 bits)"),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
    }
  },
  {
    &DM1SAD_L, 0xBC, wxTRANSLATE("0x40000BC-DM1SAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (lower 16 bits)"),
    }
  },
  {
    &DM1SAD_H, 0xBE, wxTRANSLATE("0x40000BE-DM1SAD_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (upper 12 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM1DAD_L, 0xC0, wxTRANSLATE("0x40000C0-DM1DAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (lower 16 bits)"),
    }
  },
  {
    &DM1DAD_H, 0xC2, wxTRANSLATE("0x40000C2-DM1DAD_H"), 0x07FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (upper 11 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM1CNT_L, 0xC4, wxTRANSLATE("0x40000C4-DM1CNT_L"), 0x3FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Count (14 bits)"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM1CNT_H, 0xC6, wxTRANSLATE("0x40000C6-DM1CNT_H"), 0xF7E0,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address Control (2 bits)"),
      wxT(""),
      wxTRANSLATE("Source Address Control (2 bits)"),
      wxTRANSLATE("Repeat"),
      wxTRANSLATE("Transfer Type"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Start Timing (2 bits)"),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
    }
  },
  {
    &DM2SAD_L, 0xC8, wxTRANSLATE("0x40000C8-DM2SAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (lower 16 bits)"),
    }
  },
  {
    &DM2SAD_H, 0xCA, wxTRANSLATE("0x40000CA-DM2SAD_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (upper 12 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM2DAD_L, 0xCC, wxTRANSLATE("0x40000CC-DM2DAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (lower 16 bits)"),
    }
  },
  {
    &DM2DAD_H, 0xCE, wxTRANSLATE("0x40000CE-DM2DAD_H"), 0x07FF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (upper 11 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM2CNT_L, 0xD0, wxTRANSLATE("0x40000D0-DM2CNT_L"), 0x3FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Count (14 bits)"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM2CNT_H, 0xD2, wxTRANSLATE("0x40000D2-DM2CNT_H"), 0xF7E0,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address Control (2 bits)"),
      wxT(""),
      wxTRANSLATE("Source Address Control (2 bits)"),
      wxTRANSLATE("Repeat"),
      wxTRANSLATE("Transfer Type"),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Start Timing (2 bits)"),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
    }
  },
  {
    &DM3SAD_L, 0xD4, wxTRANSLATE("0x40000D4-DM3SAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (lower 16 bits)"),
    }
  },
  {
    &DM3SAD_H, 0xD6, wxTRANSLATE("0x40000D6-DM3SAD_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Source Address (upper 12 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM3DAD_L, 0xD8, wxTRANSLATE("0x40000D8-DM3DAD_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (lower 16 bits)"),
    }
  },
  {
    &DM3DAD_H, 0xDA, wxTRANSLATE("0x40000DA-DM3DAD_H"), 0x0FFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address (upper 12 bits)"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &DM3CNT_L, 0xDC, wxTRANSLATE("0x40000DC-DM3CNT_L"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Count (16 bits)"),
    }
  },
  {
    &DM3CNT_H, 0xDE, wxTRANSLATE("0x40000DE-DM3CNT_H"), 0xFFE0,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Destination Address Control (2 bits)"),
      wxT(""),
      wxTRANSLATE("Source Address Control (2 bits)"),
      wxTRANSLATE("Repeat"),
      wxTRANSLATE("Transfer Type"),
      wxTRANSLATE("Game Pak Data Request"),
      wxT(""),
      wxTRANSLATE("Start Timing (2 bits)"),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
    }
  },
  {
    &TM0D, 0x100, wxTRANSLATE("0x4000100-TM0D"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Timer Counter (16 bits)"),
    }
  },
  {
    &TM0CNT, 0x102, wxTRANSLATE("0x4000102-TM0CNT"), 0x00C7,
    {
      wxT(""),
      wxTRANSLATE("Scalar Selection (2 bits)"),
      wxTRANSLATE("Count Up"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &TM1D, 0x104, wxTRANSLATE("0x4000104-TM1D"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Timer Counter (16 bits)"),
    }
  },
  {
    &TM1CNT, 0x106, wxTRANSLATE("0x4000106-TM1CNT"), 0x00C7,
    {
      wxT(""),
      wxTRANSLATE("Scalar Selection (2 bits)"),
      wxTRANSLATE("Count Up"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &TM2D, 0x108, wxTRANSLATE("0x4000108-TM2D"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Timer Counter (16 bits)"),
    }
  },
  {
    &TM2CNT, 0x10A, wxTRANSLATE("0x400010A-TM2CNT"), 0x00C7,
    {
      wxT(""),
      wxTRANSLATE("Scalar Selection (2 bits)"),
      wxTRANSLATE("Count Up"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &TM3D, 0x10C, wxTRANSLATE("0x400010C-TM3D"), 0xFFFF,
    {
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Timer Counter (16 bits)"),
    }
  },
  {
    &TM3CNT, 0x10E, wxTRANSLATE("0x400010E-TM3CNT"), 0x00C7,
    {
      wxT(""),
      wxTRANSLATE("Scalar Selection (2 bits)"),
      wxTRANSLATE("Count Up"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    &P1, 0x130, wxTRANSLATE("0x4000130-P1"), 0x03FF,
    {
      wxTRANSLATE("A"),
      wxTRANSLATE("B"),
      wxTRANSLATE("Select"),
      wxTRANSLATE("Start"),
      wxTRANSLATE("Right"),
      wxTRANSLATE("Left"),
      wxTRANSLATE("Up"),
      wxTRANSLATE("Down"),
      wxTRANSLATE("Shoulder Right"),
      wxTRANSLATE("Shoulder Left"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x132, wxTRANSLATE("0x4000132-P1CNT"), 0xC3FF,
    {
      wxTRANSLATE("A"),
      wxTRANSLATE("B"),
      wxTRANSLATE("Select"),
      wxTRANSLATE("Start"),
      wxTRANSLATE("Right"),
      wxTRANSLATE("Left"),
      wxTRANSLATE("Up"),
      wxTRANSLATE("Down"),
      wxTRANSLATE("Shoulder Right"),
      wxTRANSLATE("Shoulder Left"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Interrupt Request"),
      wxTRANSLATE("Interrupt Condition"),
    }
  },
  {
    &IE, 0x200, wxTRANSLATE("0x4000200-IE"), 0x3FFF,
    {
      wxTRANSLATE("VBlank"),
      wxTRANSLATE("HBlank"),
      wxTRANSLATE("VCount"),
      wxTRANSLATE("Timer 0"),
      wxTRANSLATE("Timer 1"),
      wxTRANSLATE("Timer 2"),
      wxTRANSLATE("Timer 3"),
      wxTRANSLATE("Serial"),
      wxTRANSLATE("DMA 0"),
      wxTRANSLATE("DMA 1"),
      wxTRANSLATE("DMA 2"),
      wxTRANSLATE("DMA 3"),
      wxTRANSLATE("Keypad"),
      wxTRANSLATE("Game Pak"),
      wxT(""),
      wxT(""),
    }
  },
  {
    &IF, 0x202, wxTRANSLATE("0x4000202-IF"), 0x0000,
    {
      wxTRANSLATE("VBlank"),
      wxTRANSLATE("HBlank"),
      wxTRANSLATE("VCount"),
      wxTRANSLATE("Timer 0"),
      wxTRANSLATE("Timer 1"),
      wxTRANSLATE("Timer 2"),
      wxTRANSLATE("Timer 3"),
      wxTRANSLATE("Serial"),
      wxTRANSLATE("DMA 0"),
      wxTRANSLATE("DMA 1"),
      wxTRANSLATE("DMA 2"),
      wxTRANSLATE("DMA 3"),
      wxTRANSLATE("Keypad"),
      wxTRANSLATE("Game Pak"),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x204, wxTRANSLATE("0x4000204-WAITCNT"), 0x5FFF,
    {
      wxT(""),
      wxTRANSLATE("SRAM Wait Control (2 bits)"),
      wxT(""),
      wxTRANSLATE("Wait State 0 First Access (2 bits)"),
      wxTRANSLATE("Wait State 0 Second Access"),
      wxT(""),
      wxTRANSLATE("Wait State 1 First Access (2 bits)"),
      wxTRANSLATE("Wait State 1 Second Access"),
      wxT(""),
      wxTRANSLATE("Wait State 2 First Access (2 bits)"),
      wxTRANSLATE("Wait State 2 Second Access"),
      wxT(""),
      wxTRANSLATE("PHI Terminal Output (2 bits)"),
      wxT(""),
      wxTRANSLATE("Game Pak Prefetch Buffer"),
      wxTRANSLATE("Game Pak Type Flag"),
    }
  },
  {
    &IME, 0x208, wxTRANSLATE("0x4000208-IME"), 0x0001,
    {
      wxTRANSLATE("Master Interrupt Enable"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
    }
  },
  {
    NULL, 0x300, wxTRANSLATE("0x4000300-HALTCNT"), 0x8001,
    {
      wxTRANSLATE("First Boot"),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxT(""),
      wxTRANSLATE("Power Down"),
    }
  },
};

#define NUM_IOREGS (sizeof(ioregs)/sizeof(ioregs[0]))
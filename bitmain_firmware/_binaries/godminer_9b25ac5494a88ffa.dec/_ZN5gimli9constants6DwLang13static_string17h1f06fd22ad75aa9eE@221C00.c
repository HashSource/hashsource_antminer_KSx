void *__fastcall gimli::constants::DwLang::static_string(unsigned __int16 *a1)
{
  int v1; // r1
  void *result; // r0
  void *v3; // r12

  v1 = *a1;
  result = 0;
  if ( v1 >= 0x8000 )
  {
    if ( v1 <= 36864 )
    {
      switch ( v1 )
      {
        case 32768:
          return &unk_2AE1B2;
        case 32769:
          return &unk_2AE18D;
        case 36439:
          return &unk_2AE172;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2AE12F;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2AE1A3;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2AE15D;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2AE145;
    }
  }
  else
  {
    v3 = &unk_2AE451;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2AE448;
      case 3:
        return &unk_2AE43B;
      case 4:
        return &unk_2AE428;
      case 5:
        return &unk_2AE419;
      case 6:
        return &unk_2AE40A;
      case 7:
        return &unk_2AE3F9;
      case 8:
        return &unk_2AE3E8;
      case 9:
        return &unk_2AA3BC;
      case 10:
        return &unk_2AE3D9;
      case 11:
        return &unk_2AE3CD;
      case 12:
        return &unk_2AE3C2;
      case 13:
        return &unk_2AE3B5;
      case 14:
        return &unk_2AE3A4;
      case 15:
        return &unk_2AE399;
      case 16:
        return &unk_2AE38D;
      case 17:
        return &unk_2AE377;
      case 18:
        return &unk_2AE36C;
      case 19:
        return &unk_2AE363;
      case 20:
        return &unk_2AE355;
      case 21:
        return &unk_2AE347;
      case 22:
        return &unk_2AE33D;
      case 23:
        return &unk_2AE32E;
      case 24:
        return &unk_2AE31F;
      case 25:
        return &unk_2AE309;
      case 26:
        return &unk_2AE2F3;
      case 27:
        return &unk_2AE2E6;
      case 28:
        return &unk_2AE2DA;
      case 29:
        return &unk_2AE2CF;
      case 30:
        return &unk_2AE2C2;
      case 31:
        return &unk_2AE2B5;
      case 32:
        return &unk_2AE2A8;
      case 33:
        return &unk_2AE292;
      case 34:
        return &unk_2AE281;
      case 35:
        return &unk_2AE270;
      case 36:
        return &unk_2AE25C;
      case 37:
        return &unk_2AE24F;
      case 38:
        return &unk_2AE241;
      case 39:
        return &unk_2AE236;
      case 40:
        return &unk_2AE227;
      case 42:
        return &unk_2AE211;
      case 43:
        return &unk_2AE1FB;
      case 44:
        return &unk_2AE1F0;
      case 45:
        return &unk_2AE1DF;
      case 46:
        return &unk_2AE1D0;
      case 47:
        return &unk_2AE1C1;
      default:
        return result;
    }
  }
}

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
          return &unk_29AF52;
        case 32769:
          return &unk_29AF2D;
        case 36439:
          return &unk_29AF12;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_29AECF;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_29AF43;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_29AEFD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_29AEE5;
    }
  }
  else
  {
    v3 = &unk_29B1F1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_29B1E8;
      case 3:
        return &unk_29B1DB;
      case 4:
        return &unk_29B1C8;
      case 5:
        return &unk_29B1B9;
      case 6:
        return &unk_29B1AA;
      case 7:
        return &unk_29B199;
      case 8:
        return &unk_29B188;
      case 9:
        return &unk_29715C;
      case 10:
        return &unk_29B179;
      case 11:
        return &unk_29B16D;
      case 12:
        return &unk_29B162;
      case 13:
        return &unk_29B155;
      case 14:
        return &unk_29B144;
      case 15:
        return &unk_29B139;
      case 16:
        return &unk_29B12D;
      case 17:
        return &unk_29B117;
      case 18:
        return &unk_29B10C;
      case 19:
        return &unk_29B103;
      case 20:
        return &unk_29B0F5;
      case 21:
        return &unk_29B0E7;
      case 22:
        return &unk_29B0DD;
      case 23:
        return &unk_29B0CE;
      case 24:
        return &unk_29B0BF;
      case 25:
        return &unk_29B0A9;
      case 26:
        return &unk_29B093;
      case 27:
        return &unk_29B086;
      case 28:
        return &unk_29B07A;
      case 29:
        return &unk_29B06F;
      case 30:
        return &unk_29B062;
      case 31:
        return &unk_29B055;
      case 32:
        return &unk_29B048;
      case 33:
        return &unk_29B032;
      case 34:
        return &unk_29B021;
      case 35:
        return &unk_29B010;
      case 36:
        return &unk_29AFFC;
      case 37:
        return &unk_29AFEF;
      case 38:
        return &unk_29AFE1;
      case 39:
        return &unk_29AFD6;
      case 40:
        return &unk_29AFC7;
      case 42:
        return &unk_29AFB1;
      case 43:
        return &unk_29AF9B;
      case 44:
        return &unk_29AF90;
      case 45:
        return &unk_29AF7F;
      case 46:
        return &unk_29AF70;
      case 47:
        return &unk_29AF61;
      default:
        return result;
    }
  }
}

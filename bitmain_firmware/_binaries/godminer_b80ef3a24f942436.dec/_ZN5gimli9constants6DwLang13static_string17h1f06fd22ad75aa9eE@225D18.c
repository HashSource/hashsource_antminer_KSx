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
          return &unk_2B9F52;
        case 32769:
          return &unk_2B9F2D;
        case 36439:
          return &unk_2B9F12;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2B9ECF;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2B9F43;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2B9EFD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2B9EE5;
    }
  }
  else
  {
    v3 = &unk_2BA1F1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2BA1E8;
      case 3:
        return &unk_2BA1DB;
      case 4:
        return &unk_2BA1C8;
      case 5:
        return &unk_2BA1B9;
      case 6:
        return &unk_2BA1AA;
      case 7:
        return &unk_2BA199;
      case 8:
        return &unk_2BA188;
      case 9:
        return &unk_2B615C;
      case 10:
        return &unk_2BA179;
      case 11:
        return &unk_2BA16D;
      case 12:
        return &unk_2BA162;
      case 13:
        return &unk_2BA155;
      case 14:
        return &unk_2BA144;
      case 15:
        return &unk_2BA139;
      case 16:
        return &unk_2BA12D;
      case 17:
        return &unk_2BA117;
      case 18:
        return &unk_2BA10C;
      case 19:
        return &unk_2BA103;
      case 20:
        return &unk_2BA0F5;
      case 21:
        return &unk_2BA0E7;
      case 22:
        return &unk_2BA0DD;
      case 23:
        return &unk_2BA0CE;
      case 24:
        return &unk_2BA0BF;
      case 25:
        return &unk_2BA0A9;
      case 26:
        return &unk_2BA093;
      case 27:
        return &unk_2BA086;
      case 28:
        return &unk_2BA07A;
      case 29:
        return &unk_2BA06F;
      case 30:
        return &unk_2BA062;
      case 31:
        return &unk_2BA055;
      case 32:
        return &unk_2BA048;
      case 33:
        return &unk_2BA032;
      case 34:
        return &unk_2BA021;
      case 35:
        return &unk_2BA010;
      case 36:
        return &unk_2B9FFC;
      case 37:
        return &unk_2B9FEF;
      case 38:
        return &unk_2B9FE1;
      case 39:
        return &unk_2B9FD6;
      case 40:
        return &unk_2B9FC7;
      case 42:
        return &unk_2B9FB1;
      case 43:
        return &unk_2B9F9B;
      case 44:
        return &unk_2B9F90;
      case 45:
        return &unk_2B9F7F;
      case 46:
        return &unk_2B9F70;
      case 47:
        return &unk_2B9F61;
      default:
        return result;
    }
  }
}

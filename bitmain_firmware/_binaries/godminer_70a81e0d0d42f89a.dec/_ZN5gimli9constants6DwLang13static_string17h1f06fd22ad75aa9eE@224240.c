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
          return &unk_2B0C12;
        case 32769:
          return &unk_2B0BED;
        case 36439:
          return &unk_2B0BD2;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2B0B8F;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2B0C03;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2B0BBD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2B0BA5;
    }
  }
  else
  {
    v3 = &unk_2B0EB1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2B0EA8;
      case 3:
        return &unk_2B0E9B;
      case 4:
        return &unk_2B0E88;
      case 5:
        return &unk_2B0E79;
      case 6:
        return &unk_2B0E6A;
      case 7:
        return &unk_2B0E59;
      case 8:
        return &unk_2B0E48;
      case 9:
        return &unk_2ACE1C;
      case 10:
        return &unk_2B0E39;
      case 11:
        return &unk_2B0E2D;
      case 12:
        return &unk_2B0E22;
      case 13:
        return &unk_2B0E15;
      case 14:
        return &unk_2B0E04;
      case 15:
        return &unk_2B0DF9;
      case 16:
        return &unk_2B0DED;
      case 17:
        return &unk_2B0DD7;
      case 18:
        return &unk_2B0DCC;
      case 19:
        return &unk_2B0DC3;
      case 20:
        return &unk_2B0DB5;
      case 21:
        return &unk_2B0DA7;
      case 22:
        return &unk_2B0D9D;
      case 23:
        return &unk_2B0D8E;
      case 24:
        return &unk_2B0D7F;
      case 25:
        return &unk_2B0D69;
      case 26:
        return &unk_2B0D53;
      case 27:
        return &unk_2B0D46;
      case 28:
        return &unk_2B0D3A;
      case 29:
        return &unk_2B0D2F;
      case 30:
        return &unk_2B0D22;
      case 31:
        return &unk_2B0D15;
      case 32:
        return &unk_2B0D08;
      case 33:
        return &unk_2B0CF2;
      case 34:
        return &unk_2B0CE1;
      case 35:
        return &unk_2B0CD0;
      case 36:
        return &unk_2B0CBC;
      case 37:
        return &unk_2B0CAF;
      case 38:
        return &unk_2B0CA1;
      case 39:
        return &unk_2B0C96;
      case 40:
        return &unk_2B0C87;
      case 42:
        return &unk_2B0C71;
      case 43:
        return &unk_2B0C5B;
      case 44:
        return &unk_2B0C50;
      case 45:
        return &unk_2B0C3F;
      case 46:
        return &unk_2B0C30;
      case 47:
        return &unk_2B0C21;
      default:
        return result;
    }
  }
}

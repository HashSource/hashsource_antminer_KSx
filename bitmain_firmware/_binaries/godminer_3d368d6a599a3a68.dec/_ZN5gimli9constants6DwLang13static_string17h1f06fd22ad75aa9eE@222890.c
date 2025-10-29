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
          return &unk_2AF0F2;
        case 32769:
          return &unk_2AF0CD;
        case 36439:
          return &unk_2AF0B2;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2AF06F;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2AF0E3;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2AF09D;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2AF085;
    }
  }
  else
  {
    v3 = &unk_2AF391;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2AF388;
      case 3:
        return &unk_2AF37B;
      case 4:
        return &unk_2AF368;
      case 5:
        return &unk_2AF359;
      case 6:
        return &unk_2AF34A;
      case 7:
        return &unk_2AF339;
      case 8:
        return &unk_2AF328;
      case 9:
        return &unk_2AB2FC;
      case 10:
        return &unk_2AF319;
      case 11:
        return &unk_2AF30D;
      case 12:
        return &unk_2AF302;
      case 13:
        return &unk_2AF2F5;
      case 14:
        return &unk_2AF2E4;
      case 15:
        return &unk_2AF2D9;
      case 16:
        return &unk_2AF2CD;
      case 17:
        return &unk_2AF2B7;
      case 18:
        return &unk_2AF2AC;
      case 19:
        return &unk_2AF2A3;
      case 20:
        return &unk_2AF295;
      case 21:
        return &unk_2AF287;
      case 22:
        return &unk_2AF27D;
      case 23:
        return &unk_2AF26E;
      case 24:
        return &unk_2AF25F;
      case 25:
        return &unk_2AF249;
      case 26:
        return &unk_2AF233;
      case 27:
        return &unk_2AF226;
      case 28:
        return &unk_2AF21A;
      case 29:
        return &unk_2AF20F;
      case 30:
        return &unk_2AF202;
      case 31:
        return &unk_2AF1F5;
      case 32:
        return &unk_2AF1E8;
      case 33:
        return &unk_2AF1D2;
      case 34:
        return &unk_2AF1C1;
      case 35:
        return &unk_2AF1B0;
      case 36:
        return &unk_2AF19C;
      case 37:
        return &unk_2AF18F;
      case 38:
        return &unk_2AF181;
      case 39:
        return &unk_2AF176;
      case 40:
        return &unk_2AF167;
      case 42:
        return &unk_2AF151;
      case 43:
        return &unk_2AF13B;
      case 44:
        return &unk_2AF130;
      case 45:
        return &unk_2AF11F;
      case 46:
        return &unk_2AF110;
      case 47:
        return &unk_2AF101;
      default:
        return result;
    }
  }
}

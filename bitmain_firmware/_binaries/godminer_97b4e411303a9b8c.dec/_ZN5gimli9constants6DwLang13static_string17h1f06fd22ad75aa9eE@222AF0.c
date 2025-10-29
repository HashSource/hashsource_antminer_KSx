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
          return &unk_2AF352;
        case 32769:
          return &unk_2AF32D;
        case 36439:
          return &unk_2AF312;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2AF2CF;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2AF343;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2AF2FD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2AF2E5;
    }
  }
  else
  {
    v3 = &unk_2AF5F1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2AF5E8;
      case 3:
        return &unk_2AF5DB;
      case 4:
        return &unk_2AF5C8;
      case 5:
        return &unk_2AF5B9;
      case 6:
        return &unk_2AF5AA;
      case 7:
        return &unk_2AF599;
      case 8:
        return &unk_2AF588;
      case 9:
        return &unk_2AB55C;
      case 10:
        return &unk_2AF579;
      case 11:
        return &unk_2AF56D;
      case 12:
        return &unk_2AF562;
      case 13:
        return &unk_2AF555;
      case 14:
        return &unk_2AF544;
      case 15:
        return &unk_2AF539;
      case 16:
        return &unk_2AF52D;
      case 17:
        return &unk_2AF517;
      case 18:
        return &unk_2AF50C;
      case 19:
        return &unk_2AF503;
      case 20:
        return &unk_2AF4F5;
      case 21:
        return &unk_2AF4E7;
      case 22:
        return &unk_2AF4DD;
      case 23:
        return &unk_2AF4CE;
      case 24:
        return &unk_2AF4BF;
      case 25:
        return &unk_2AF4A9;
      case 26:
        return &unk_2AF493;
      case 27:
        return &unk_2AF486;
      case 28:
        return &unk_2AF47A;
      case 29:
        return &unk_2AF46F;
      case 30:
        return &unk_2AF462;
      case 31:
        return &unk_2AF455;
      case 32:
        return &unk_2AF448;
      case 33:
        return &unk_2AF432;
      case 34:
        return &unk_2AF421;
      case 35:
        return &unk_2AF410;
      case 36:
        return &unk_2AF3FC;
      case 37:
        return &unk_2AF3EF;
      case 38:
        return &unk_2AF3E1;
      case 39:
        return &unk_2AF3D6;
      case 40:
        return &unk_2AF3C7;
      case 42:
        return &unk_2AF3B1;
      case 43:
        return &unk_2AF39B;
      case 44:
        return &unk_2AF390;
      case 45:
        return &unk_2AF37F;
      case 46:
        return &unk_2AF370;
      case 47:
        return &unk_2AF361;
      default:
        return result;
    }
  }
}

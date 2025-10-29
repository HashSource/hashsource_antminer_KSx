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
          return &unk_299A02;
        case 32769:
          return &unk_2999DD;
        case 36439:
          return &unk_2999C2;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_29997F;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2999F3;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2999AD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_299995;
    }
  }
  else
  {
    v3 = &unk_299CA1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_299C98;
      case 3:
        return &unk_299C8B;
      case 4:
        return &unk_299C78;
      case 5:
        return &unk_299C69;
      case 6:
        return &unk_299C5A;
      case 7:
        return &unk_299C49;
      case 8:
        return &unk_299C38;
      case 9:
        return &unk_295C0C;
      case 10:
        return &unk_299C29;
      case 11:
        return &unk_299C1D;
      case 12:
        return &unk_299C12;
      case 13:
        return &unk_299C05;
      case 14:
        return &unk_299BF4;
      case 15:
        return &unk_299BE9;
      case 16:
        return &unk_299BDD;
      case 17:
        return &unk_299BC7;
      case 18:
        return &unk_299BBC;
      case 19:
        return &unk_299BB3;
      case 20:
        return &unk_299BA5;
      case 21:
        return &unk_299B97;
      case 22:
        return &unk_299B8D;
      case 23:
        return &unk_299B7E;
      case 24:
        return &unk_299B6F;
      case 25:
        return &unk_299B59;
      case 26:
        return &unk_299B43;
      case 27:
        return &unk_299B36;
      case 28:
        return &unk_299B2A;
      case 29:
        return &unk_299B1F;
      case 30:
        return &unk_299B12;
      case 31:
        return &unk_299B05;
      case 32:
        return &unk_299AF8;
      case 33:
        return &unk_299AE2;
      case 34:
        return &unk_299AD1;
      case 35:
        return &unk_299AC0;
      case 36:
        return &unk_299AAC;
      case 37:
        return &unk_299A9F;
      case 38:
        return &unk_299A91;
      case 39:
        return &unk_299A86;
      case 40:
        return &unk_299A77;
      case 42:
        return &unk_299A61;
      case 43:
        return &unk_299A4B;
      case 44:
        return &unk_299A40;
      case 45:
        return &unk_299A2F;
      case 46:
        return &unk_299A20;
      case 47:
        return &unk_299A11;
      default:
        return result;
    }
  }
}

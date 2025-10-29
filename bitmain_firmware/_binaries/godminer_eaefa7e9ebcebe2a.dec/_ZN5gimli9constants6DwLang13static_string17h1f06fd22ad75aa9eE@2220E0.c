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
          return &unk_2AE7E2;
        case 32769:
          return &unk_2AE7BD;
        case 36439:
          return &unk_2AE7A2;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2AE75F;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2AE7D3;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2AE78D;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2AE775;
    }
  }
  else
  {
    v3 = &unk_2AEA81;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2AEA78;
      case 3:
        return &unk_2AEA6B;
      case 4:
        return &unk_2AEA58;
      case 5:
        return &unk_2AEA49;
      case 6:
        return &unk_2AEA3A;
      case 7:
        return &unk_2AEA29;
      case 8:
        return &unk_2AEA18;
      case 9:
        return &unk_2AA9EC;
      case 10:
        return &unk_2AEA09;
      case 11:
        return &unk_2AE9FD;
      case 12:
        return &unk_2AE9F2;
      case 13:
        return &unk_2AE9E5;
      case 14:
        return &unk_2AE9D4;
      case 15:
        return &unk_2AE9C9;
      case 16:
        return &unk_2AE9BD;
      case 17:
        return &unk_2AE9A7;
      case 18:
        return &unk_2AE99C;
      case 19:
        return &unk_2AE993;
      case 20:
        return &unk_2AE985;
      case 21:
        return &unk_2AE977;
      case 22:
        return &unk_2AE96D;
      case 23:
        return &unk_2AE95E;
      case 24:
        return &unk_2AE94F;
      case 25:
        return &unk_2AE939;
      case 26:
        return &unk_2AE923;
      case 27:
        return &unk_2AE916;
      case 28:
        return &unk_2AE90A;
      case 29:
        return &unk_2AE8FF;
      case 30:
        return &unk_2AE8F2;
      case 31:
        return &unk_2AE8E5;
      case 32:
        return &unk_2AE8D8;
      case 33:
        return &unk_2AE8C2;
      case 34:
        return &unk_2AE8B1;
      case 35:
        return &unk_2AE8A0;
      case 36:
        return &unk_2AE88C;
      case 37:
        return &unk_2AE87F;
      case 38:
        return &unk_2AE871;
      case 39:
        return &unk_2AE866;
      case 40:
        return &unk_2AE857;
      case 42:
        return &unk_2AE841;
      case 43:
        return &unk_2AE82B;
      case 44:
        return &unk_2AE820;
      case 45:
        return &unk_2AE80F;
      case 46:
        return &unk_2AE800;
      case 47:
        return &unk_2AE7F1;
      default:
        return result;
    }
  }
}

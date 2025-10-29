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
          return &unk_2AE652;
        case 32769:
          return &unk_2AE62D;
        case 36439:
          return &unk_2AE612;
        default:
          return result;
      }
    }
    else if ( v1 >= 45056 )
    {
      if ( v1 == 45056 )
      {
        return &unk_2AE5CF;
      }
      else
      {
        if ( v1 != 0xFFFF )
          return result;
        return &unk_2AE643;
      }
    }
    else if ( v1 == 36865 )
    {
      return &unk_2AE5FD;
    }
    else
    {
      if ( v1 != 37121 )
        return result;
      return &unk_2AE5E5;
    }
  }
  else
  {
    v3 = &unk_2AE8F1;
    switch ( v1 )
    {
      case 1:
        return v3;
      case 2:
        return &unk_2AE8E8;
      case 3:
        return &unk_2AE8DB;
      case 4:
        return &unk_2AE8C8;
      case 5:
        return &unk_2AE8B9;
      case 6:
        return &unk_2AE8AA;
      case 7:
        return &unk_2AE899;
      case 8:
        return &unk_2AE888;
      case 9:
        return &unk_2AA85C;
      case 10:
        return &unk_2AE879;
      case 11:
        return &unk_2AE86D;
      case 12:
        return &unk_2AE862;
      case 13:
        return &unk_2AE855;
      case 14:
        return &unk_2AE844;
      case 15:
        return &unk_2AE839;
      case 16:
        return &unk_2AE82D;
      case 17:
        return &unk_2AE817;
      case 18:
        return &unk_2AE80C;
      case 19:
        return &unk_2AE803;
      case 20:
        return &unk_2AE7F5;
      case 21:
        return &unk_2AE7E7;
      case 22:
        return &unk_2AE7DD;
      case 23:
        return &unk_2AE7CE;
      case 24:
        return &unk_2AE7BF;
      case 25:
        return &unk_2AE7A9;
      case 26:
        return &unk_2AE793;
      case 27:
        return &unk_2AE786;
      case 28:
        return &unk_2AE77A;
      case 29:
        return &unk_2AE76F;
      case 30:
        return &unk_2AE762;
      case 31:
        return &unk_2AE755;
      case 32:
        return &unk_2AE748;
      case 33:
        return &unk_2AE732;
      case 34:
        return &unk_2AE721;
      case 35:
        return &unk_2AE710;
      case 36:
        return &unk_2AE6FC;
      case 37:
        return &unk_2AE6EF;
      case 38:
        return &unk_2AE6E1;
      case 39:
        return &unk_2AE6D6;
      case 40:
        return &unk_2AE6C7;
      case 42:
        return &unk_2AE6B1;
      case 43:
        return &unk_2AE69B;
      case 44:
        return &unk_2AE690;
      case 45:
        return &unk_2AE67F;
      case 46:
        return &unk_2AE670;
      case 47:
        return &unk_2AE661;
      default:
        return result;
    }
  }
}

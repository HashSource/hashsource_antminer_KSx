int __fastcall update_str_and_flag(int result, int a2, __int64 *a3)
{
  int v3; // r3
  int v5; // r1
  _BYTE *v7; // r2
  int v8; // r3
  __int64 v9; // r4
  __int64 v10; // r4
  __int64 v11; // r4

  v3 = *(_DWORD *)(result + 332);
  v5 = 0;
  *(_DWORD *)(a2 + 72) = 0;
  v7 = *(_BYTE **)(a2 + 76);
  if ( v3 > 0 )
  {
    v8 = 0;
    do
    {
      switch ( *(_DWORD *)(*(_DWORD *)(result + 528) + v5 + 16) )
      {
        case 0:
          ++*(_DWORD *)(a2 + 72);
          *v7 = 111;
          break;
        case 1:
          *v7 = 35;
          v11 = *a3;
          LODWORD(v11) = *(_DWORD *)a3 | 1;
          *a3 = v11;
          break;
        case 2:
          *v7 = 88;
          v10 = *a3;
          LODWORD(v10) = *(_DWORD *)a3 | 2;
          *a3 = v10;
          break;
        case 3:
          *v7 = 120;
          v9 = *a3;
          LODWORD(v9) = *(_DWORD *)a3 | 4;
          *a3 = v9;
          break;
        default:
          *v7 = 42;
          break;
      }
      if ( !v8 || (v8 & 7) != 0 )
      {
        ++v7;
      }
      else
      {
        v7[1] = 32;
        v7 += 2;
      }
      ++v8;
      v5 += 44;
    }
    while ( *(_DWORD *)(result + 332) > v8 );
  }
  *v7 = 0;
  return result;
}

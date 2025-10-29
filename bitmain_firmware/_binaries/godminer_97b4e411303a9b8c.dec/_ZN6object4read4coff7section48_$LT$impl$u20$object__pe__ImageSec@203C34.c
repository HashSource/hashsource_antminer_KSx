_DWORD *__fastcall object::read::coff::section::<impl object::pe::ImageSectionHeader>::name_offset(
        _DWORD *result,
        _BYTE *a2)
{
  int v2; // r3
  int v3; // r2
  unsigned __int8 v4; // r12
  unsigned int v5; // r2
  unsigned __int8 v6; // r5
  unsigned __int8 v7; // r5
  unsigned __int8 v8; // r5
  unsigned __int8 v9; // r5
  unsigned __int8 v10; // r5
  const char *v11; // r1
  int v12; // r2
  unsigned __int8 v13; // lr
  int v14; // r3
  unsigned __int8 v15; // r2
  int v16; // r4
  unsigned __int8 v17; // r3
  int v18; // r5
  unsigned __int8 v19; // r4
  unsigned int v20; // r2
  int v21; // r3
  unsigned __int8 v22; // r5
  signed __int64 v23; // kr08_8
  __int64 v24; // r2
  __int64 v25; // kr10_8

  if ( *a2 != 47 )
  {
    result[1] = 0;
    *result = 0;
    return result;
  }
  v2 = (unsigned __int8)a2[1];
  if ( v2 != 47 )
  {
    v5 = (unsigned __int8)(v2 - 48);
    if ( v5 >= 0xA )
    {
      v5 = 0;
    }
    else
    {
      v2 = (unsigned __int8)a2[2];
      v6 = v2 - 48;
      if ( (unsigned __int8)(v2 - 48) <= 9u )
      {
        v2 = (unsigned __int8)a2[3];
        v5 = 10 * v5 + v6;
        v7 = v2 - 48;
        if ( (unsigned __int8)(v2 - 48) <= 9u )
        {
          v2 = (unsigned __int8)a2[4];
          v5 = 10 * v5 + v7;
          v8 = v2 - 48;
          if ( (unsigned __int8)(v2 - 48) <= 9u )
          {
            v2 = (unsigned __int8)a2[5];
            v5 = 10 * v5 + v8;
            v9 = v2 - 48;
            if ( (unsigned __int8)(v2 - 48) <= 9u )
            {
              v2 = (unsigned __int8)a2[6];
              v5 = 10 * v5 + v9;
              v10 = v2 - 48;
              if ( (unsigned __int8)(v2 - 48) <= 9u )
              {
                v2 = (unsigned __int8)a2[7];
                v5 = 10 * v5 + v10;
                if ( (unsigned __int8)(v2 - 48) <= 9u )
                {
                  v5 = 10 * v5 + (unsigned __int8)(v2 - 48);
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
    }
    if ( v2 )
    {
      v11 = aInvalidCoffSec;
LABEL_70:
      result[1] = v11;
      result[2] = 40;
      *result = 1;
      return result;
    }
LABEL_18:
    result[1] = 1;
    result[2] = v5;
    *result = 0;
    return result;
  }
  v3 = (unsigned __int8)a2[2];
  v4 = v3 - 65;
  if ( (unsigned __int8)(v3 - 65) >= 0x1Au )
  {
    if ( (unsigned __int8)(v3 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v3 - 48) >= 0xAu )
      {
        if ( v3 == 43 )
        {
          v4 = 62;
        }
        else
        {
          if ( v3 != 47 )
            goto LABEL_69;
          v4 = 63;
        }
      }
      else
      {
        v4 = v3 + 4;
      }
    }
    else
    {
      v4 = v3 - 71;
    }
  }
  v12 = (unsigned __int8)a2[3];
  v13 = v12 - 65;
  if ( (unsigned __int8)(v12 - 65) >= 0x1Au )
  {
    if ( (unsigned __int8)(v12 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v12 - 48) >= 0xAu )
      {
        if ( v12 == 43 )
        {
          v13 = 62;
        }
        else
        {
          if ( v12 != 47 )
            goto LABEL_69;
          v13 = 63;
        }
      }
      else
      {
        v13 = v12 + 4;
      }
    }
    else
    {
      v13 = v12 - 71;
    }
  }
  v14 = (unsigned __int8)a2[4];
  v15 = v14 - 65;
  if ( (unsigned __int8)(v14 - 65) >= 0x1Au )
  {
    if ( (unsigned __int8)(v14 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v14 - 48) >= 0xAu )
      {
        if ( v14 == 43 )
        {
          v15 = 62;
        }
        else
        {
          if ( v14 != 47 )
            goto LABEL_69;
          v15 = 63;
        }
      }
      else
      {
        v15 = v14 + 4;
      }
    }
    else
    {
      v15 = v14 - 71;
    }
  }
  v16 = (unsigned __int8)a2[5];
  v17 = v16 - 65;
  if ( (unsigned __int8)(v16 - 65) >= 0x1Au )
  {
    if ( (unsigned __int8)(v16 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v16 - 48) >= 0xAu )
      {
        if ( v16 == 43 )
        {
          v17 = 62;
        }
        else
        {
          if ( v16 != 47 )
            goto LABEL_69;
          v17 = 63;
        }
      }
      else
      {
        v17 = v16 + 4;
      }
    }
    else
    {
      v17 = v16 - 71;
    }
  }
  v18 = (unsigned __int8)a2[6];
  v19 = v18 - 65;
  if ( (unsigned __int8)(v18 - 65) < 0x1Au )
    goto LABEL_61;
  if ( (unsigned __int8)(v18 - 97) < 0x1Au )
  {
    v19 = v18 - 71;
    goto LABEL_61;
  }
  if ( (unsigned __int8)(v18 - 48) < 0xAu )
  {
    v19 = v18 + 4;
    goto LABEL_61;
  }
  if ( v18 != 43 )
  {
    if ( v18 == 47 )
    {
      v19 = 63;
      goto LABEL_61;
    }
LABEL_69:
    v11 = aInvalidCoffSec_0;
    goto LABEL_70;
  }
  v19 = 62;
LABEL_61:
  v20 = (((((v4 << 6) + v13) << 6) + v15) << 6) + v17;
  v21 = (unsigned __int8)a2[7];
  v22 = v21 - 65;
  v23 = __PAIR64__(v20 >> 26, v19) + (v20 << 6);
  if ( (unsigned __int8)(v21 - 65) < 0x1Au )
    goto LABEL_72;
  if ( (unsigned __int8)(v21 - 97) < 0x1Au )
  {
    v22 = v21 - 71;
    goto LABEL_72;
  }
  if ( (unsigned __int8)(v21 - 48) < 0xAu )
  {
    v22 = v21 + 4;
    goto LABEL_72;
  }
  if ( v21 != 43 )
  {
    if ( v21 == 47 )
    {
      v22 = 63;
      goto LABEL_72;
    }
    goto LABEL_69;
  }
  v22 = 62;
LABEL_72:
  HIDWORD(v24) = v23 >> 26;
  LODWORD(v24) = v22;
  v25 = v24 + (unsigned int)((_DWORD)v23 << 6);
  if ( HIDWORD(v25) )
  {
    *result = 1;
    result[1] = aInvalidCoffSec_0;
    result[2] = 40;
  }
  else
  {
    result[2] = v25;
    *result = 0;
    result[1] = 1;
  }
  return result;
}

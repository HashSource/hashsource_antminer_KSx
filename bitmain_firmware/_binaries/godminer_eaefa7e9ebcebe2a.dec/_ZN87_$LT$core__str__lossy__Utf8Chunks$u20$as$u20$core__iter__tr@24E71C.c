_DWORD *__fastcall <core::str::lossy::Utf8Chunks as core::iter::traits::iterator::Iterator>::next(
        _DWORD *result,
        int *a2)
{
  unsigned int v2; // r12
  int v3; // lr
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r7
  int v7; // r4
  const char *v8; // r4
  const char *v9; // r4
  int v10; // r4
  const char *v11; // r4
  char v12; // r4
  const char *v13; // r4
  const char *v14; // r4
  const char *v15; // r4

  v2 = a2[1];
  if ( v2 )
  {
    v3 = *a2;
    v4 = 0;
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)(v3 + v4);
      v5 = v4 + 1;
      if ( (v6 & 0x80u) == 0 )
      {
        ++v4;
      }
      else
      {
        v7 = byte_2B4379[v6];
        switch ( v7 )
        {
          case 4:
            v9 = "";
            if ( v5 < v2 )
              v9 = (const char *)(v3 + v5);
            v10 = *v9;
            if ( v6 == 240 )
            {
              if ( (unsigned __int8)(v10 + 112) >= 0x30u )
                goto LABEL_47;
            }
            else if ( v6 == 244 )
            {
              if ( v10 > -113 )
                goto LABEL_47;
            }
            else if ( (unsigned __int8)(v6 + 15) > 2u || v10 >= -64 )
            {
              goto LABEL_47;
            }
            v5 = v4 + 2;
            v13 = "";
            if ( v4 + 2 < v2 )
              v13 = (const char *)(v3 + v5);
            if ( (*v13 & 0xC0) != 0x80 )
              goto LABEL_47;
            v5 = v4 + 3;
            v14 = "";
            if ( v4 + 3 < v2 )
              v14 = (const char *)(v3 + v5);
            if ( (*v14 & 0xC0) != 0x80 )
            {
LABEL_47:
              *a2 = v3 + v5;
              a2[1] = v2 - v5;
              *result = v3;
              result[1] = v4;
              result[2] = v3 + v4;
              result[3] = v5 - v4;
              return result;
            }
            v4 += 4;
            break;
          case 3:
            v11 = "";
            if ( v5 < v2 )
              v11 = (const char *)(v3 + v5);
            v12 = *v11;
            if ( v6 == 224 )
            {
              if ( (v12 & 0xE0) != 0xA0 )
                goto LABEL_47;
            }
            else if ( v6 == 237 )
            {
              if ( v12 >= -96 )
                goto LABEL_47;
            }
            else if ( (unsigned __int8)(v6 + 31) >= 0xCu )
            {
              if ( ((char)v6 & 0xFFFFFFFE) != 0xFFFFFFEE || v12 >= -64 )
                goto LABEL_47;
            }
            else if ( v12 > -65 )
            {
              goto LABEL_47;
            }
            v5 = v4 + 2;
            v15 = "";
            if ( v4 + 2 < v2 )
              v15 = (const char *)(v3 + v5);
            if ( (*v15 & 0xC0) != 0x80 )
              goto LABEL_47;
            v4 += 3;
            break;
          case 2:
            v8 = "";
            if ( v5 < v2 )
              v8 = (const char *)(v3 + v5);
            if ( (*v8 & 0xC0) != 0x80 )
              goto LABEL_47;
            v4 += 2;
            break;
          default:
            goto LABEL_47;
        }
      }
      v5 = v4;
      if ( v4 >= v2 )
        goto LABEL_47;
    }
  }
  *result = 0;
  return result;
}

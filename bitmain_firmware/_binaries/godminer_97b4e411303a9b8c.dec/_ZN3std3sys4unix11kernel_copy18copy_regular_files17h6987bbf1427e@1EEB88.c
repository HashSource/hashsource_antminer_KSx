int __fastcall std::sys::unix::kernel_copy::copy_regular_files(int a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // r0
  int v10; // r0
  int result; // r0
  int v12; // r3

  if ( byte_30CCA8 )
  {
    if ( byte_30CCA8 != 1 )
      goto LABEL_3;
LABEL_22:
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 6;
    return 6;
  }
  if ( !&copy_file_range )
  {
    if ( syscall(391, -1, 0, -1, 0, 1, 0) == -1 )
      goto LABEL_20;
LABEL_21:
    byte_30CCA8 = 1;
    goto LABEL_22;
  }
  if ( copy_file_range(-1, 0, -1, 0, 1, 0) != -1 )
    goto LABEL_21;
LABEL_20:
  if ( *_errno_location() != 9 )
    goto LABEL_21;
  byte_30CCA8 = 2;
LABEL_3:
  if ( a5 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = a5 - v8;
      if ( (a5 - v8) >> 32 )
        v9 = -1;
      if ( v9 >= 0x40000000 )
        v9 = 0x40000000;
      if ( &copy_file_range )
      {
        v10 = copy_file_range(a2, 0, a3, 0, v9, 0);
        if ( !v10 )
          goto LABEL_24;
      }
      else
      {
        v10 = syscall(391, a2, 0, a3, 0, v9, 0);
        if ( !v10 )
        {
LABEL_24:
          if ( v8 )
            goto LABEL_25;
          *(_DWORD *)a1 = 0;
          *(_DWORD *)(a1 + 4) = 0;
          *(_BYTE *)(a1 + 8) = 6;
          return 6;
        }
      }
      if ( v10 == -1 )
      {
        result = *_errno_location();
        v12 = a1;
        switch ( result )
        {
          case 1:
          case 9:
          case 18:
          case 22:
          case 38:
            goto LABEL_27;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 19:
          case 20:
          case 21:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
            goto LABEL_28;
          default:
            v12 = a1;
            if ( result == 75 )
            {
              *(_QWORD *)a1 = v8;
              *(_BYTE *)(a1 + 8) = 6;
              result = 6;
            }
            else
            {
              if ( result != 95 )
                goto LABEL_28;
LABEL_27:
              if ( v8 )
              {
LABEL_28:
                *(_QWORD *)v12 = v8;
                *(_DWORD *)(v12 + 8) = 0;
                *(_DWORD *)(v12 + 12) = result;
                return result;
              }
              *(_DWORD *)v12 = 0;
              *(_DWORD *)(v12 + 4) = 0;
              *(_BYTE *)(v12 + 8) = 6;
              result = 6;
            }
            break;
        }
        return result;
      }
      v8 += v10;
      if ( v8 >= a5 )
        goto LABEL_25;
    }
  }
  v8 = 0;
LABEL_25:
  *(_BYTE *)(a1 + 8) = 4;
  *(_QWORD *)a1 = v8;
  return 4;
}

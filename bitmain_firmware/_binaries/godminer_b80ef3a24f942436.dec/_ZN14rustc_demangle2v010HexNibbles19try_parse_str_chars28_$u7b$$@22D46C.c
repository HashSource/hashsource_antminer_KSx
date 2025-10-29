int __fastcall rustc_demangle::v0::HexNibbles::try_parse_str_chars::{{closure}}::{{closure}}::utf8_len_from_first_byte(
        int result,
        char a2)
{
  if ( a2 <= -1 )
  {
    if ( (unsigned __int8)a2 >= 0xC0u )
    {
      if ( (unsigned __int8)a2 >= 0xE0u )
      {
        if ( (unsigned __int8)a2 >= 0xF0u )
        {
          if ( (unsigned __int8)a2 < 0xF8u )
          {
            *(_DWORD *)(result + 4) = 4;
            *(_BYTE *)result = 0;
          }
          else
          {
            *(_BYTE *)(result + 1) = 1;
            *(_BYTE *)result = 1;
          }
        }
        else
        {
          *(_DWORD *)(result + 4) = 3;
          *(_BYTE *)result = 0;
        }
      }
      else
      {
        *(_DWORD *)(result + 4) = 2;
        *(_BYTE *)result = 0;
      }
    }
    else
    {
      *(_BYTE *)(result + 1) = 0;
      *(_BYTE *)result = 1;
    }
  }
  else
  {
    *(_DWORD *)(result + 4) = 1;
    *(_BYTE *)result = 0;
  }
  return result;
}

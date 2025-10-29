void __fastcall sub_916E8(_DWORD *a1)
{
  if ( a1[15] == 256 )
  {
    jsonp_free(a1[16]);
    a1[16] = 0;
    a1[17] = 0;
    strbuffer_close((int)(a1 + 10));
  }
  else
  {
    strbuffer_close((int)(a1 + 10));
  }
}

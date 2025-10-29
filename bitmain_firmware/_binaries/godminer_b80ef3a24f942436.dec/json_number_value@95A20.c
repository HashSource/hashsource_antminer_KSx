int __fastcall json_number_value(double result)
{
  if ( LODWORD(result) && *(_DWORD *)LODWORD(result) == 3 )
    result = sub_270788(*(_DWORD *)(LODWORD(result) + 8), *(_DWORD *)(LODWORD(result) + 12));
  return LODWORD(result);
}

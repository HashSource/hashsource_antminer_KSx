int __fastcall sub_227B3C(int a1, unsigned int a2)
{
  if ( a2 >= 0x10 )
    return core::str::count::do_count_chars();
  else
    return core::str::count::char_count_general_case();
}

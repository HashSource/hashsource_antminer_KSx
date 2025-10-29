int __fastcall sub_22B774(char *a1, unsigned int a2)
{
  if ( a2 >= 0x10 )
    return core::str::count::do_count_chars(a1, a2);
  else
    return core::str::count::char_count_general_case(a1, a2);
}

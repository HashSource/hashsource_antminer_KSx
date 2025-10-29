int __fastcall set_cur_block_num_rvn(double a1)
{
  if ( *(_QWORD *)&dbl_2D49F0 < *(_QWORD *)&a1 )
    dbl_2D49F0 = a1;
  return LODWORD(a1);
}

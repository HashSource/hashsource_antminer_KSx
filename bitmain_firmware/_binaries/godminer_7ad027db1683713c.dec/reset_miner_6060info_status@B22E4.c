void reset_miner_6060info_status()
{
  *(_QWORD *)byte_2D35F8 = 0;
  unk_2D3600 = 0;
  unk_2D3608 = 0;
  dbl_2D3610 = 0.0;
  dbl_2D3618 = 0.0;
  dbl_2D3620 = 0.0;
  *(double *)((char *)&dbl_2D3620 + 2) = 0.0;
}

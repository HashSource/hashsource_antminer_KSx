int get_miner_status()
{
  _BYTE v1[20]; // [sp+0h] [bp-14h] BYREF

  get_miner_working_status(v1);
  return (v1[10] << 11)
       | (v1[9] << 12)
       | v1[8]
       | (v1[11] << 10)
       | (v1[12] << 9)
       | (v1[0] << 8)
       | (v1[1] << 7)
       | (v1[2] << 6)
       | (32 * v1[3])
       | (16 * v1[4])
       | (8 * v1[5])
       | (4 * v1[6])
       | (2 * v1[7]);
}

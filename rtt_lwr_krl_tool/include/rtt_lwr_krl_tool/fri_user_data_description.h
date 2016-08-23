#ifndef __FRI_USER_DATA_DESCRIPTION__
#define __FRI_USER_DATA_DESCRIPTION__

namespace krl{

enum FRI_BOOL_DATA_DESCRIPTION
{
    KRL_LOOP_REQUESTED = 0,
    EMPTY_BOOL,
    SET_CONTROL_MODE,
    SET_TOOL,
    SET_BASE,
    PTP_CMD, // send a PTP command
    LIN_CMD, // send a lin command (see LIN_CMD_TYPE)
    STOP2, // Send a stop2 (brakes but still active)
    SET_VEL, // Set the max vel (should modify the value on teach upper right)
    MASK_0, // Mask used for A1-A6 (PTP) or XYZABC (LIN)
    MASK_1,
    MASK_2,
    MASK_3,
    MASK_4,
    MASK_5,
    MASK_6
};

enum FRI_INT_DATA_DESCRIPTION
{
    FRI_STATE = 0,
    CONTROL_MODE,
    TOOL,
    BASE,
    FRI_CMD,
    PTP_CMD_TYPE, // 0 is PTP, 1 is PTP_REL
    LIN_CMD_TYPE // 0 is LIN, 1 is LIN_REL
};

enum FRI_COMMAND
{
    FRI_START = 0,
    FRI_STOP,
    FRI_CLOSE
};

enum FRI_REAL_DATA_DESCRIPTION
{
    X = 0,
    Y,
    Z,
    A,
    B,
    C,
    REAL_EMPTY6,
    REAL_EMPTY7,
    VEL_PERCENT,
    A1,
    A2,
    E1,
    A3,
    A4,
    A5,
    A6
};

}
#endif

double len=134; 
static double ref_profile[][4]={ 
0.00000000, 0.00000000, 0.00000000, 0.00000000, 
0.00493517, 0.04935172, 0.00000000, 0.00000000, 
0.01974069, 0.09870343, 0.00000000, 0.00000000, 
0.04441654, 0.14805515, 0.00000000, 0.00000000, 
0.07896275, 0.19740687, 0.00000000, 0.00000000, 
0.12337929, 0.24675858, 0.00000000, 0.00000000, 
0.17766618, 0.29611030, 0.00000000, 0.00000000, 
0.24182341, 0.34546202, 0.00000000, 0.00000000, 
0.31229766, 0.33559167, 0.00000000, 0.00000000, 
0.37448083, 0.28623996, 0.00000000, 0.00000000, 
0.42679364, 0.23688824, 0.00000000, 0.00000000, 
0.46923612, 0.18753652, 0.00000000, 0.00000000, 
0.50180825, 0.13818481, 0.00000000, 0.00000000, 
0.52451004, 0.08883309, 0.00000000, 0.00000000, 
0.53734149, 0.03948137, 0.00000000, 0.00000000, 
0.54050000, -0.00000000, 0.00000000, 0.00000000, 
0.54050000, -0.00000000, 0.00000000, 0.00000000, 
0.54050000, -0.00000000, 0.00000000, 0.00000000, 
0.54050000, 0.00000000, 0.00000000, 0.00000000, 
0.54050000, 0.00000000, 0.00000000, 0.00000000, 
0.54050000, 0.00000000, 0.00000000, 0.00000000, 
0.54050000, 0.00000000, 0.00000000, 0.00000000, 
0.54050000, 0.00000000, 0.00000000, 0.00000000, 
0.53961240, -0.01044230, 0.00000000, 0.00000000, 
0.53629544, -0.02272737, 0.00000000, 0.00000000, 
0.53052146, -0.03501243, 0.00000000, 0.00000000, 
0.52229047, -0.04729749, 0.00000000, 0.00000000, 
0.51160246, -0.05958255, 0.00000000, 0.00000000, 
0.49845744, -0.07186762, 0.00000000, 0.00000000, 
0.48285541, -0.08415268, 0.00000000, 0.00000000, 
0.46529392, -0.08538119, 0.00000000, 0.00000000, 
0.44944619, -0.07309612, 0.00000000, 0.00000000, 
0.43605547, -0.06081106, 0.00000000, 0.00000000, 
0.42512176, -0.04852600, 0.00000000, 0.00000000, 
0.41664507, -0.03624094, 0.00000000, 0.00000000, 
0.41062539, -0.02395587, 0.00000000, 0.00000000, 
0.40706272, -0.01167081, 0.00000000, 0.00000000, 
0.40595399, 0.00000000, 0.00000000, 0.00000000, 
0.40132793, -0.04626061, 0.41982821, 0.16848879, 
0.38744975, -0.09252121, 0.59031674, 0.22871807, 
0.36431945, -0.13878182, 0.59110861, 0.21535236, 
0.33193702, -0.18504243, 0.51827301, 0.17203400, 
0.29143586, -0.19892061, 0.42782342, 0.12468309, 
0.25627780, -0.15266000, 0.35601465, 0.09123865, 
0.23037186, -0.10639939, 0.30696154, 0.07071530, 
0.21371804, -0.06013879, 0.27682545, 0.05916259, 
0.20631635, -0.01387818, 0.26288572, 0.05423762, 
0.20590000, 0.00000000, 0.26092302, 0.05372405, 
0.20590000, 0.00000000, 0.26233467, 0.05401471, 
0.20590000, -0.00000000, 0.26656614, 0.05488597, 
0.20590000, -0.00000000, 0.27352942, 0.05631971, 
0.20590000, -0.00000000, 0.28301635, 0.05827307, 
0.20696558, 0.01121664, 0.29613974, 0.06129073, 
0.21038961, 0.02302362, 0.31433400, 0.06613261, 
0.21617503, 0.03483061, 0.33668511, 0.07278291, 
0.22432185, 0.04663760, 0.36068629, 0.08090982, 
0.23461754, 0.05136039, 0.38020090, 0.08920180, 
0.24370892, 0.03955341, 0.37847872, 0.09223864, 
0.25043891, 0.02774642, 0.33730132, 0.08447337, 
0.25480749, 0.01593943, 0.23968887, 0.06107452, 
0.25681468, 0.00413245, 0.07557157, 0.01940789, 
0.25694467, -0.00024410, 0.12006945, 0.03085121, 
0.25685517, -0.00065092, 0.27185332, 0.06982693, 
0.25668430, -0.00105775, 0.36373105, 0.09336405, 
0.25643207, -0.00146457, 0.40653231, 0.10424792, 
0.25609847, -0.00187140, 0.41548259, 0.10640446, 
0.25575694, -0.00150525, 0.40512400, 0.10361328, 
0.25549658, -0.00109843, 0.38644381, 0.09873507, 
0.25531757, -0.00069160, 0.36631557, 0.09352680, 
0.25521993, -0.00028478, 0.34855776, 0.08895889, 
0.25520000, 0.00000000, 0.33505668, 0.08550647, 
0.25520000, 0.00000000, 0.32657569, 0.08334212, 
0.25520000, 0.00000000, 0.32341672, 0.08253595, 
0.25520000, 0.00000000, 0.32566714, 0.08311025, 
0.25520000, 0.00000000, 0.33326656, 0.08504963, 
0.25521231, 0.00022375, 0.34595709, 0.08829251, 
0.25529774, 0.00063058, 0.36309457, 0.09269722, 
0.25546454, 0.00103740, 0.38302800, 0.09785007, 
0.25571270, 0.00144423, 0.40233793, 0.10288292, 
0.25604223, 0.00185105, 0.41474438, 0.10619207, 
0.25638722, 0.00152559, 0.40999018, 0.10511624, 
0.25665165, 0.00111877, 0.37397520, 0.09598135, 
0.25683472, 0.00071194, 0.29130434, 0.07481707, 
0.25693643, 0.00030512, 0.14992489, 0.03852117, 
0.25695769, -0.00008137, 0.04223859, 0.01085353, 
0.25690073, -0.00048819, 0.21863178, 0.05616666, 
0.25676241, -0.00089502, 0.33364283, 0.08566694, 
0.25654273, -0.00130184, 0.39435435, 0.10116874, 
0.25624168, -0.00170867, 0.41497891, 0.10633489, 
0.25588387, -0.00166798, 0.41077922, 0.10511178, 
0.25559096, -0.00126116, 0.39439353, 0.10080342, 
0.25537941, -0.00085433, 0.37424166, 0.09557361, 
0.25524923, -0.00044751, 0.35522401, 0.09067065, 
0.25520041, -0.00004068, 0.33987922, 0.08673732, 
0.25520000, 0.00000000, 0.32934044, 0.08404768, 
0.25520000, 0.00000000, 0.32403251, 0.08269310, 
0.25520000, 0.00000000, 0.32411837, 0.08271501, 
0.25520000, 0.00000000, 0.32959576, 0.08411284, 
0.25520092, 0.00006102, 0.34029549, 0.08684372, 
0.25525380, 0.00046785, 0.35578203, 0.09081472, 
0.25538805, 0.00087467, 0.37488668, 0.09574158, 
0.25560367, 0.00128150, 0.39501277, 0.10096671, 
0.25590065, 0.00168832, 0.41116558, 0.10521754, 
0.25625866, 0.00168832, 0.41479195, 0.10629403, 
0.25655564, 0.00128150, 0.39313106, 0.10085999, 
0.25677126, 0.00087467, 0.33088758, 0.08496242, 
0.25690551, 0.00046785, 0.21396798, 0.05496955, 
0.25695840, 0.00006102, 0.03629431, 0.00932613, 
0.25735850, 0.00498977, 0.15574410, 0.04008207, 
0.25898017, 0.01122699, 0.29781312, 0.07712769, 
0.26184929, 0.01746421, 0.38444903, 0.10066771, 
0.26596586, 0.02370142, 0.42671190, 0.11349080, 
0.27132986, 0.02993864, 0.43864837, 0.11901840, 
0.27762945, 0.02993864, 0.43304266, 0.12022540, 
0.28299346, 0.02370142, 0.41767400, 0.11819901, 
0.28711002, 0.01746421, 0.39989718, 0.11481449, 
0.28997914, 0.01122699, 0.38454650, 0.11151046, 
0.29160082, 0.00498977, 0.37419945, 0.10911687, 
0.29200000, 0.00000000, 0.37005489, 0.10805603, 
0.29200000, 0.00000000, 0.37349287, 0.10905992, 
0.29200000, 0.00000000, 0.38490158, 0.11239126, 
0.29200000, 0.00000000, 0.40366967, 0.11787155, 
0.29200000, 0.00000000, 0.42803423, 0.12498599, 
0.29200000, 0.00000000, 0.45373990, 0.13249205, 
0.28680242, -0.05197579, 0.46348424, 0.13292840, 
0.27120968, -0.10395158, 0.43472759, 0.11790233, 
0.24522179, -0.15592738, 0.35978963, 0.08822826, 
0.20883873, -0.20790317, 0.25053030, 0.05232043, 
0.16206052, -0.25987896, 0.13802712, 0.02236875, 
0.10998078, -0.23908864, 0.05706990, 0.00627659, 
0.06736063, -0.18711285, 0.01790982, 0.00120642, 
0.03513564, -0.13513706, 0.00424882, 0.00014929, 
0.01330580, -0.08316127, 0.00086599, 0.00001152, 
0.00187113, -0.03118548, -0.00007079, -0.00000013}; 
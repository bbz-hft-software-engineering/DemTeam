
task main()
{
// Variables for calculation of angles
	float angleA, angleB, angleC, angleBC, angleD, result1, result2, result3, result4, result5, result6, ca = 123, cb = 120, cc, ch = 153, ck, cx, cy, cz ;

// Calc angleA
angleA = atan(cy / cx) * 180/PI;

// Calc angleBC
	ck = sqrt(pow(cx,2) + pow(cy,2)) - 65;
	cc = sqrt(pow(ch-cz, 2) + pow(ck,2));

	// Calc angle B
	result1 = (cc*cc + (ch-cz) * (ch-cz) - ck*ck) / (2 * cc *(ch-cz));
	result2 = acos(result1);
	angleB = result2 * 180/PI;

	// Calc angle C
	result3 = (cb*cb + cc*cc - ca*ca) / (2 * cb * cc);
	result4 = acos(result3);
	angleC = result4 * 180/PI;
angleBC = angleB + angleC;

// Calc angle D
	result5 = (ca*ca + cb*cb - cc*cc) / (2 * ca * cb);
	result6 = acos(result5);
angleD = result5 * 180/PI;
}


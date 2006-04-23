float3 VertexBlend(float3 pos, float4 blend_weights, int4 blend_indices, float4x3 bones[64])
{
	float3 result_pos = 0;
	for (int i = 0; i < 4; ++ i)
	{
		float4x3 bone = bones[blend_indices[i]];
		float weight = blend_weights[i];

		result_pos += mul(float4(pos, 1), bone) * weight;
	}

	return result_pos;
}

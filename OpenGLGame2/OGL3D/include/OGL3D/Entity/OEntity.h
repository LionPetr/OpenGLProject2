#pragma once

class OEntitySystem;
class OEntity
{
public:
	OEntity();
	virtual ~OEntity();

	virtual void onCreate() {}

	void release();

protected:
	size_t m_id = 0;
	OEntitySystem* m_entitySystem = nullptr;

	friend class OEntitySystem;

};


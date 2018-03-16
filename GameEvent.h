//
// Created by toxicoverflow on 23.02.17.
//
#include "main.hpp"

#ifndef MICROWAVE_GAMEEVENT_H_H
#define MICROWAVE_GAMEEVENT_H_H

class IGameEvent
{
public:
	const char* GetName( )
	{
		return getvfunc<const char*( * )( void* )>( this, 1 )( this );
	}

	int GetInt( const char* szKeyName, int nDefault = 0 )
	{
		return getvfunc<int( * )( void*, const char*, int )>( this, 6 )( this, szKeyName, nDefault );
	}

	const char* GetString( const char* szKeyName )
	{
		return getvfunc<const char*( * )( void*, const char*, int )>( this, 9 )( this, szKeyName, 0 );
	}

	void SetString( const char* szKeyName, const char* szValue )
	{
        getvfunc<void( * )( void*, const char*, const char* )>( this, 16 )( this, szKeyName, szValue );
	}
};

class IGameEventManager2
{
public:
	bool FireEventClientSide( IGameEvent* pEvent )
	{
		return getvfunc<bool( * )( void*, IGameEvent* )>( this, 9 )( this, pEvent );
	}
};

#endif //MICROWAVE_GAMEEVENT_H_H

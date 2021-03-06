//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIBasicAnimationFactory.h"

@class CAMediaTimingFunction, NSString;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    double _duration;
    BOOL _needsDurationUpdate;
    CDUnknownBlockType _animationDelayHandler;
    float _mass;
    float _stiffness;
    float _damping;
    float _velocity;
    CAMediaTimingFunction *_timing;
    double _maximumVendedDelay;
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(float)arg2;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)defaultTimingFunction;
@property(readonly, nonatomic) double maximumVendedDelay; // @synthesize maximumVendedDelay=_maximumVendedDelay;
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(nonatomic) float damping; // @synthesize damping=_damping;
@property(nonatomic) float stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) float mass; // @synthesize mass=_mass;
- (void)setAnimationDelayHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)animationDelayHandler;
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)springAnimationWithKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4 timing:(id)arg5;
- (id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4;
- (id)initWithVelocity:(float)arg1 timing:(id)arg2;
- (id)initWithVelocity:(float)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


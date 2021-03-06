//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OADCachedDrawableStyle : NSObject
{
    int mFillCategory;
    unsigned int mFillIndex;
    unsigned int mStrokeIndex;
    unsigned int mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned int mTextStyleIndex;
}

@property(readonly, nonatomic) unsigned int textStyleIndex; // @synthesize textStyleIndex=mTextStyleIndex;
@property(readonly, nonatomic) unsigned char reflectionOpacity; // @synthesize reflectionOpacity=mReflectionOpacity;
@property(readonly, nonatomic) unsigned int shadowIndex; // @synthesize shadowIndex=mShadowIndex;
@property(readonly, nonatomic) unsigned int strokeIndex; // @synthesize strokeIndex=mStrokeIndex;
@property(readonly, nonatomic) unsigned int fillIndex; // @synthesize fillIndex=mFillIndex;
@property(readonly, nonatomic) int fillCategory; // @synthesize fillCategory=mFillCategory;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned int)arg2 strokeIndex:(unsigned int)arg3 shadowIndex:(unsigned int)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned int)arg6;

@end


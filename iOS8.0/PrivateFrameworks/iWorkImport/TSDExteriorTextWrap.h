//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    float _margin;
    float _alphaThreshold;
}

+ (id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(float)arg5 alphaThreshold:(float)arg6;
+ (id)exteriorTextWrap;
@property(readonly, nonatomic) float alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
@property(readonly, nonatomic) float margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) int fitType; // @synthesize fitType=_fitType;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL isHTMLWrap; // @synthesize isHTMLWrap=_isHTMLWrap;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(float)arg5 alphaThreshold:(float)arg6;
- (id)init;
- (void)saveToArchive:(struct ExteriorTextWrapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive *)arg1;

@end


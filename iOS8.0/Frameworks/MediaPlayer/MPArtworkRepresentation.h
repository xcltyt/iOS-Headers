//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface MPArtworkRepresentation : NSObject
{
    UIImage *_image;
    struct CGSize _representationSize;
}

+ (id)representationWithSize:(struct CGSize)arg1 image:(id)arg2;
@property(nonatomic) struct CGSize representationSize; // @synthesize representationSize=_representationSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)debugQuickLookObject;

@end

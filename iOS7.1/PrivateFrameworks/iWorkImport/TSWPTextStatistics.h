//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSWPTextStatistics : NSObject <NSCopying>
{
    unsigned int _wordCount;
    unsigned int _charactersNoWhiteSpace;
    unsigned int _paragraphCount;
    BOOL _isAccurate;
}

@property(nonatomic) BOOL isAccurate; // @synthesize isAccurate=_isAccurate;
@property(nonatomic) unsigned int paragraphCount; // @synthesize paragraphCount=_paragraphCount;
@property(nonatomic) unsigned int charactersNoWhiteSpace; // @synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace;
@property(nonatomic) unsigned int wordCount; // @synthesize wordCount=_wordCount;
- (BOOL)isEqual:(id)arg1;
- (void)removeTextStatistics:(id)arg1;
- (void)addTextStatistics:(id)arg1;
- (void)setTextStatistics:(id)arg1;
- (void)resetStatistics;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


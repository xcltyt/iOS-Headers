//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mStorage;
    int mDirection;
    unsigned int mCachedNumberOfGroups;
    BOOL mCachedNumberOfGroupsValid;
}

- (id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID *)arg2;
- (void)saveToArchive:(struct ChartMediatorFormulaStorage *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ChartMediatorFormulaStorage *)arg1 unarchiver:(id)arg2;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(struct __CFUUID *)arg2;
- (int)categoryLabelFormulaType;
- (int)seriesLabelFormulaType;
- (unsigned int)numberOfSeries;
- (unsigned int)numberOfDataFormulas;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID *)arg2;
- (BOOL)formulasOfType:(int)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(struct __CFUUID *)arg3;
- (unsigned int)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID *)arg2;
- (unsigned int)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID *)arg2;
- (id)description;
- (struct __CFDictionary *)p_cfDictionary;
- (id)formulaTypeEnumerator;
- (id)formulaListForType:(int)arg1;
- (id)formulaOrNilForID:(CDStruct_a91f2c80)arg1;
- (id)formulaForID:(CDStruct_a91f2c80)arg1;
- (unsigned int)count;
- (BOOL)isEqualToFormulaStorage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (int)direction;
- (void)dealloc;
- (id)initWithChartFormulaStorage:(id)arg1;
- (id)initWithDirection:(int)arg1;
- (id)init;

@end

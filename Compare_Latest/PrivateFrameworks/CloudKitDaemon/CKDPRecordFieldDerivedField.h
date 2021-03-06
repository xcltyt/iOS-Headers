//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRecordFieldDerivedField : PBCodable <NSCopying>
{
    CKDPRecordFieldIdentifier *_aggregatedField;
    NSMutableArray *_aggregatedTypes;
    int _aggregationFunction;
    NSMutableArray *_filters;
    CKDPRecordFieldIdentifier *_groupByField;
    CKDPRecordFieldIdentifier *_identifier;
    NSMutableArray *_targetTypes;
    struct {
        unsigned int aggregationFunction:1;
    } _has;
}

@property(nonatomic) int aggregationFunction; // @synthesize aggregationFunction=_aggregationFunction;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *groupByField; // @synthesize groupByField=_groupByField;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *aggregatedField; // @synthesize aggregatedField=_aggregatedField;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *targetTypes; // @synthesize targetTypes=_targetTypes;
@property(retain, nonatomic) NSMutableArray *aggregatedTypes; // @synthesize aggregatedTypes=_aggregatedTypes;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAggregationFunction;
@property(readonly, nonatomic) BOOL hasGroupByField;
@property(readonly, nonatomic) BOOL hasAggregatedField;
- (id)filtersAtIndex:(unsigned int)arg1;
- (unsigned int)filtersCount;
- (void)addFilters:(id)arg1;
- (void)clearFilters;
- (id)targetTypesAtIndex:(unsigned int)arg1;
- (unsigned int)targetTypesCount;
- (void)addTargetTypes:(id)arg1;
- (void)clearTargetTypes;
- (id)aggregatedTypesAtIndex:(unsigned int)arg1;
- (unsigned int)aggregatedTypesCount;
- (void)addAggregatedTypes:(id)arg1;
- (void)clearAggregatedTypes;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {
    NSMutableArray * _formatArguments;
    NSMutableArray * _formatStrings;
    NSMutableArray * _separators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *formatArguments;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, retain) NSMutableArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *separators;
@property (nonatomic, retain) NSMutableArray *separators;
@property (readonly) Class superclass;

+ (Class)formatArgumentType;
+ (Class)formatStringType;
+ (Class)separatorType;

- (void)addFormatArgument:(id)arg1;
- (void)addFormatString:(id)arg1;
- (void)addSeparator:(id)arg1;
- (void)clearFormatArguments;
- (void)clearFormatStrings;
- (void)clearSeparators;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatArgumentAtIndex:(unsigned int)arg1;
- (id)formatArguments;
- (unsigned int)formatArgumentsCount;
- (id)formatString;
- (id)formatStringAtIndex:(unsigned int)arg1;
- (id)formatStrings;
- (unsigned int)formatStringsCount;
- (id)formatTokens;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)separatorAtIndex:(unsigned int)arg1;
- (id)separators;
- (unsigned int)separatorsCount;
- (void)setFormatArguments:(id)arg1;
- (void)setFormatStrings:(id)arg1;
- (void)setSeparators:(id)arg1;
- (void)writeTo:(id)arg1;

@end

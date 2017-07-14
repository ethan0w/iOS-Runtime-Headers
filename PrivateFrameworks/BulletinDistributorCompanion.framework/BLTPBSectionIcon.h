/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionIcon : PBCodable <NSCopying> {
    NSMutableArray * _variants;
}

@property (nonatomic, retain) NSMutableArray *variants;

- (void).cxx_destruct;
- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variantAtIndex:(unsigned int)arg1;
- (id)variants;
- (unsigned int)variantsCount;
- (void)writeTo:(id)arg1;

@end

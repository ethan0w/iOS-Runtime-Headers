/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString;

@interface SPSearchResult : PBCodable  {
    unsigned long long _identifier;
    NSString *_auxiliarySubtitle;
    NSString *_auxiliaryTitle;
    int _flags;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_title;
    NSString *_url;
    struct { 
        unsigned int identifier : 1; 
        unsigned int flags : 1; 
    } _has;
}

@property(readonly) BOOL hasTitle;
@property(retain) NSString * title;
@property(readonly) BOOL hasSubtitle;
@property(retain) NSString * subtitle;
@property(readonly) BOOL hasSummary;
@property(retain) NSString * summary;
@property(readonly) BOOL hasAuxiliaryTitle;
@property(retain) NSString * auxiliaryTitle;
@property(readonly) BOOL hasAuxiliarySubtitle;
@property(retain) NSString * auxiliarySubtitle;
@property BOOL hasIdentifier;
@property unsigned long long identifier;
@property(readonly) BOOL hasUrl;
@property(retain) NSString * url;
@property BOOL hasFlags;
@property int flags;


- (void)setSummary:(id)arg1;
- (id)summary;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)identifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isEquivalentToResult:(id)arg1;
- (void)setHasFlags:(BOOL)arg1;
- (void)setHasIdentifier:(BOOL)arg1;
- (BOOL)hasFlags;
- (BOOL)hasIdentifier;
- (id)auxiliarySubtitle;
- (BOOL)hasAuxiliarySubtitle;
- (id)auxiliaryTitle;
- (BOOL)hasAuxiliaryTitle;
- (BOOL)hasSummary;
- (BOOL)hasSubtitle;
- (void)setAuxiliarySubtitle:(id)arg1;
- (void)setAuxiliaryTitle:(id)arg1;
- (void)setFlags:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasUrl;
- (BOOL)hasTitle;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)dictionaryRepresentation;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (int)flags;
- (id)title;
- (void)setTitle:(id)arg1;

@end

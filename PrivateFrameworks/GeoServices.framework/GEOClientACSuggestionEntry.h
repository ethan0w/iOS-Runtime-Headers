/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying> {
    int  _age;
    double  _contactRelevanceScore;
    int  _distanceToSuggestion;
    double  _fractionOfMatch;
    struct { 
        unsigned int contactRelevanceScore : 1; 
        unsigned int fractionOfMatch : 1; 
        unsigned int age : 1; 
        unsigned int distanceToSuggestion : 1; 
        unsigned int peopleSuggesterRank : 1; 
        unsigned int serverEntryType : 1; 
        unsigned int suggestionType : 1; 
        unsigned int matchedUsingAddress : 1; 
        unsigned int matchedUsingEventName : 1; 
        unsigned int matchedUsingLabel : 1; 
        unsigned int matchedUsingName : 1; 
        unsigned int matchedUsingOrganization : 1; 
        unsigned int shownToUser : 1; 
    }  _has;
    BOOL  _matchedUsingAddress;
    BOOL  _matchedUsingEventName;
    BOOL  _matchedUsingLabel;
    BOOL  _matchedUsingName;
    BOOL  _matchedUsingOrganization;
    int  _peopleSuggesterRank;
    int  _serverEntryType;
    BOOL  _shownToUser;
    int  _suggestionType;
}

@property (nonatomic) int age;
@property (nonatomic) double contactRelevanceScore;
@property (nonatomic) int distanceToSuggestion;
@property (nonatomic) double fractionOfMatch;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasContactRelevanceScore;
@property (nonatomic) BOOL hasDistanceToSuggestion;
@property (nonatomic) BOOL hasFractionOfMatch;
@property (nonatomic) BOOL hasMatchedUsingAddress;
@property (nonatomic) BOOL hasMatchedUsingEventName;
@property (nonatomic) BOOL hasMatchedUsingLabel;
@property (nonatomic) BOOL hasMatchedUsingName;
@property (nonatomic) BOOL hasMatchedUsingOrganization;
@property (nonatomic) BOOL hasPeopleSuggesterRank;
@property (nonatomic) BOOL hasServerEntryType;
@property (nonatomic) BOOL hasShownToUser;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) BOOL matchedUsingAddress;
@property (nonatomic) BOOL matchedUsingEventName;
@property (nonatomic) BOOL matchedUsingLabel;
@property (nonatomic) BOOL matchedUsingName;
@property (nonatomic) BOOL matchedUsingOrganization;
@property (nonatomic) int peopleSuggesterRank;
@property (nonatomic) int serverEntryType;
@property (nonatomic) BOOL shownToUser;
@property (nonatomic) int suggestionType;

- (int)StringAsServerEntryType:(id)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (int)age;
- (double)contactRelevanceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceToSuggestion;
- (double)fractionOfMatch;
- (BOOL)hasAge;
- (BOOL)hasContactRelevanceScore;
- (BOOL)hasDistanceToSuggestion;
- (BOOL)hasFractionOfMatch;
- (BOOL)hasMatchedUsingAddress;
- (BOOL)hasMatchedUsingEventName;
- (BOOL)hasMatchedUsingLabel;
- (BOOL)hasMatchedUsingName;
- (BOOL)hasMatchedUsingOrganization;
- (BOOL)hasPeopleSuggesterRank;
- (BOOL)hasServerEntryType;
- (BOOL)hasShownToUser;
- (BOOL)hasSuggestionType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchedUsingAddress;
- (BOOL)matchedUsingEventName;
- (BOOL)matchedUsingLabel;
- (BOOL)matchedUsingName;
- (BOOL)matchedUsingOrganization;
- (void)mergeFrom:(id)arg1;
- (int)peopleSuggesterRank;
- (BOOL)readFrom:(id)arg1;
- (int)serverEntryType;
- (id)serverEntryTypeAsString:(int)arg1;
- (void)setAge:(int)arg1;
- (void)setContactRelevanceScore:(double)arg1;
- (void)setDistanceToSuggestion:(int)arg1;
- (void)setFractionOfMatch:(double)arg1;
- (void)setHasAge:(BOOL)arg1;
- (void)setHasContactRelevanceScore:(BOOL)arg1;
- (void)setHasDistanceToSuggestion:(BOOL)arg1;
- (void)setHasFractionOfMatch:(BOOL)arg1;
- (void)setHasMatchedUsingAddress:(BOOL)arg1;
- (void)setHasMatchedUsingEventName:(BOOL)arg1;
- (void)setHasMatchedUsingLabel:(BOOL)arg1;
- (void)setHasMatchedUsingName:(BOOL)arg1;
- (void)setHasMatchedUsingOrganization:(BOOL)arg1;
- (void)setHasPeopleSuggesterRank:(BOOL)arg1;
- (void)setHasServerEntryType:(BOOL)arg1;
- (void)setHasShownToUser:(BOOL)arg1;
- (void)setHasSuggestionType:(BOOL)arg1;
- (void)setMatchedUsingAddress:(BOOL)arg1;
- (void)setMatchedUsingEventName:(BOOL)arg1;
- (void)setMatchedUsingLabel:(BOOL)arg1;
- (void)setMatchedUsingName:(BOOL)arg1;
- (void)setMatchedUsingOrganization:(BOOL)arg1;
- (void)setPeopleSuggesterRank:(int)arg1;
- (void)setServerEntryType:(int)arg1;
- (void)setShownToUser:(BOOL)arg1;
- (void)setSuggestionType:(int)arg1;
- (BOOL)shownToUser;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

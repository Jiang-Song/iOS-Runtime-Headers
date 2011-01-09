/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3Track : ML3Entity 
{
}

@property(readonly) MLChapterTOC *chapterTOC;

+ (void)initialize;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)arg1;
+ (id)podcastsDefaultOrderingProperties;
+ (id)artistAllAlbumsDefaultOrderingProperties;
+ (id)albumAllArtistsDefaultOrderingProperties;
+ (id)albumAndArtistDefaultOrderingProperties;
+ (id)podcastsEpisodesDefaultOrderingProperties;
+ (id)TVShowEpisodesDefaultOrderingProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)databaseTable;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignColumnForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)albumsDefaultOrderingProperties;
+ (id)artistsDefaultOrderingProperties;
+ (id)composersDefaultOrderingProperties;
+ (id)genresDefaultOrderingProperties;
+ (id)defaultOrderingProperties;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2;
- (BOOL)deleteFromLibrary;
- (BOOL)isOTAPurchasedContent;
- (id)chapterTOC;
- (unsigned long long)persistentUID;
- (unsigned long)imageDBRecordID:(NSInteger)arg1;

@end
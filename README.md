## WW Migrate Wordpress

This module provide a solution to import data from Wordpress to Drupal 8.
When your import is completed, disable the WW Migrate Wordpress module into the Drupal 8 Backend.

### How to use it ?

- Enable the ```WW Migrate Wordpress``` inside the Drupal 8 Backend.
- Use your terminal and go to your root Drupal 8 folder with the command line : ```cd```.
- Create and import your Wordpress database.
- Launch the script with drush : ```drush import:wordpress```.

### What does this module ?

- From drush, connect to your Wordpress database.
- Prepare all posts on a periode.
- Import this posts to Drupal 8.
- Import all images link to your content.

### Fields imported to Drupal 8

- Title
- Body
- Featured image
- Creation date
- Categories
- Tags

### Want to help me to improve this module ?

Fork the project and ask a pull request or send me a private message.
